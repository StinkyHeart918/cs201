/*
Lb15.cpp
William Odom Jr.
10/14/2021
*/

#include <iostream>
#include <string>
#include <sstream>
#include "Lb15.hpp"

using std::cout; 
using std::endl;
using std::string;
using std::istringstream;

void outputNum(const string& str)
{
	double num = 0;
	char c = 1;
	istringstream instream(str);
	instream >> num;
	if (!instream)
	{
		cout << "Oops! There are no number here!" << endl; 
	}
	else
	{
		num = num * num; 
		cout << num << endl;
	}
}