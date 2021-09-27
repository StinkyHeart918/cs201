/*
boxer.cpp
William Odom Jr. 
9/27/2021
Pushes functions to main in boxerprint.cpp
*/

#include <iostream>
#include <string>
#include "boxer.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;

//Takes a valid input from user
int inputInfo(int size, std::string& phrase) 
{
	cout << "Please enter a string: ";
	cin >> phrase;
	if (phrase == "num")
	{
		return 0;
	}
	cout << "Please enter a positive integer: ";
	cin >> size;
	while (size < 1)
	{
		cout << "That is not a positive number, please try again: ";
		cin >> size;
	}
}
