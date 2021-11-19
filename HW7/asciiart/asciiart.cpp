/*
asciiart.cpp
William Odom Jr
11/18/2021
Reads a ppm image file and creates ascii art of the image inside 
*/

#include <fstream>
using std::ifstream; 

#include <iostream>
using std::cout; 
using std::endl; 
using std::string; 

int main()
{
	ifstream fin("parrot.ppm");
	if (!fin)
	{
		cout << "Error opening parrot.ppm" << endl;
		exit(1);
	}

	cout << "Done " << endl;
}