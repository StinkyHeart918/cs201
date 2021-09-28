/*
boxerprint.cpp
William Odom Jr.
9/27/2021
Calls to function that requests user input and print out a boxed statement based on that
*/

#include <iostream>
#include <string>
#include "boxer.hpp"

using std::cout;
using std::endl;
using std::cin; 
using std::string; 

int main()
{
	string phrase; 
	int size = 0; 
	for (int x = 0; x < 100; x++)
	{
		size = inputInfo(size, phrase);
		if (size == 0)
		{
			return 0; 
		}
		box(size, phrase);
	}
	return 0; 
}