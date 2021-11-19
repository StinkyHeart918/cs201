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
	cout << "Image size " << xres << "x" << yres << "y" << endl;
	cout << "Max Value = " << maxval << endl;



	//read the RGB pixels

	//convert to grayscale

	//output each pixel as ascii characters

	cout << "Done " << endl;
}