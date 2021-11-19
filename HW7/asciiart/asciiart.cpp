/*
asciiart.cpp
William Odom Jr
11/18/2021
Reads a ppm image file and creates ascii art of the image inside 
*/
#include <sstream>
using std::getline; 

#include <fstream>
using std::ifstream; 

#include <iostream>
using std::cout; 
using std::endl; 
using std::string; 

#include <vector>
using std::vector; 

//Universals for our image 
int xres, yres, maxval; 
vector<int> ppm;

bool read_ppm(string filename)
{
	//open file
	ifstream fin(filename);
	if (!fin)
		return false; 
	cout << "Opened file " << filename << "successfully" << endl;

	//read header
	string line;
	getline(fin, line);
	if (!fin)
		return false; 
	if (line[0] == 'P' && line[1] == '3')
		cout << "PPM (text) " << endl;
	else
	{
		cout << "Unable to determine file type P3" << endl;
		return false;
	}

	//Deal with comments at the beginning
	getline(fin, line);
	if (!fin)
		return false; 
	if (line[0] == '#')
		cout << "Ignoring comment" << endl;

	//image size and max value
	fin >> xres >> yres >> maxval;
	if (!fin)
	{
		cout << "Error reading file resolution" << endl;
		return false;
	}

	if (xres < 0)
	{
		cout << "Error within file: xres" << endl;
		return false;
	}
	if (yres < 0)
	{
		cout << "Error within file: yres" << endl;
		return false;
	}
	if (maxval < 0)
	{
		cout << "Error within file: Max Value" << endl;
		return false;
	}
	cout << "Image size " << xres << " x " << yres << " y " << endl;
	cout << "Max Value = " << maxval << endl;

	//read rgb pixels
	int r, g, b, y;
	int pixels2read = xres * yres; //how many do we need in the grid? 
	for (int i = 0; i < pixels2read; i++)
	{
		fin >> r >> g >> b;
		if (!fin)
		{
			cout << "Error reading pixels" << endl;
			return false;
		}
		ppm.push_back(r);
		ppm.push_back(g);
		ppm.push_back(b);
	}
	//if no issues, then note file is open and necessary info passed
	return true; 
}




int main()
{
	//open ppm file ()
	string filename = "parrot.ppm";
	if (!read_ppm(filename))
	{
		cout << "Error opening or reading " << filename << endl;
		exit(1);
	}
	cout << "Successfully opened and read file " << filename << endl; 

	for (int i = 0; i < xres * yres; i++)
	{
		int y;

		//map pixel r,g,b values to luminance values

		y = 0.2126 * ppm[i*3] + 0.7152 * ppm[i*3+1] + 0.0722 * ppm[i*3+2];
		//cout << i << " = " << r << " " << g << " " << b;
		//cout << " -> " << y;
		if (y < 0 || y >255)
		{
			cout << "y out of range" << endl;
			exit(5);
		}

		//map luminance to an ascii character
		const char value[] = " .-+:^*!/($&@0%#"; //becomes " .-+:^*!/($&@0%#" with final submission for 0-15 index
		int y2ascii = y / 16;  // divide by 16 for final submission
		//cout << " -> " << y2ascii << endl;

		//take shape
		cout << value[y2ascii];
		if (i % xres == xres-1)
			cout << endl; 
	}
	cout << "Done " << endl;
}