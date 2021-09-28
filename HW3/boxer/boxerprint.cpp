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

/*void box(int size, string phrase)
{
	int side = sizeof(phrase);
	int gap = side + 2; 
	side = side + 2 * size; 
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < side; j++)
		{
			cout << "*";
		}
	}
}*/

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