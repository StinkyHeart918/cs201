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

void print(vector<string>& words)
{
	for (auto n : words)
	{
		cout << n << " ";
	}
}