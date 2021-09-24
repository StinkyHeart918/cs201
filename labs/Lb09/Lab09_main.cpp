/*
Lab09_main.cpp
William Odom Jr.
9/24/2021
Contains a function that returns a value and a parameter passed by reference
*/

#include "modifyString.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string; 

int main()
{
	string stringInMain = "Hello";
	cout << "length: " << modifyString(stringInMain, 0) << endl;
	cout << "stringInMain: " << stringInMain << endl;
}