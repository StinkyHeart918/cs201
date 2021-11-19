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

int main()
{
	//open ppm file ()

	string filename = "parrot.ppm";
	ifstream fin(filename);
	if (!fin)
	{
		cout << "Error opening " << filename << endl;
		exit(1);
	}
	cout << "Successfully opened " << filename << endl; 

	//read the header

	string line; 
	getline(fin, line);
	if (line[0] == 'P' && line[1] == '3')
		cout << "PPM (text) " << endl;
	else
	{
		cout << "Unable to determine file type P3" << endl;
		exit(2);
	}

	//Deal with comments at the beginning
	getline(fin, line);
	if (line[0] == '#')
		cout << "Ignoring comment" << endl;

	//image size and max value
	int xres, yres, maxval; 
	fin >> xres >> yres >> maxval; 
	if (!fin)
	{
		cout << "Error reading file" << endl;
		exit(3);
	}

	if (xres < 0)
	{
		cout << "Error within file: xres" << endl; 
		exit(4);
	}
	if (yres < 0)
	{
		cout << "Error within file: yres" << endl;
		exit(4);
	}
	if (maxval < 0)
	{
		cout << "Error within file: Max Value" << endl;
		exit(4);
	}
	cout << "Image size " << xres << "x" << yres << "y" << endl;
	cout << "Max Value = " << maxval << endl;

	//read the RGB pixels
	int r, g, b, y;
	int pixels2read = xres * yres; //how many do we need in the grid? 
	for (int i = 0; i < pixels2read; i++)
	{
		fin >> r >> g >> b;
		if (!fin)
		{
			cout << "Error reading pixels" << endl;
			exit(3);
		}
		y = 0.2126 * r + 0.7152 * g + 0.0722 * b; 
		cout << i << " = " << r << " " << g << " " << b;
		cout << " -> " << y;
		if (y < 0 || y >255)
		{
			cout << "Y out of range" << endl;
			exit(5);
		}
	}

	//convert to grayscale

	//output each pixel as ascii characters

	cout << "Done " << endl;
}