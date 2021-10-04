/*
vector_manip.cpp
William Odom Jr.
10/4/2021
Contains functions that creates a vector of strings then prints them with spaces between each string.
*/

#include <iostream>
#include <vector>
#include <string>
#include "vector_manip.hpp"

using std::cout;
using std::endl;
using std::vector; 
using std::string; 

void generate(vector<string>& str)
{ 
	str.resize(2);
	str[0] = "Hello";
	str[1] = "Goodbye";
}

void print(vector<string>& str)
{
	int longth = str.size(); 
	for (int i = 0; i < longth; i++)
	{
		cout << str[i] << " ";
	}
}