/*
Lb15Main.cpp
William Odom Jr.
10/14/2021
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Lb15.hpp"

using std::vector; 
using std::string;

int main()
{
	double num = 0;
	char c = 1;
	num = num + c; 
	std::cout << num << c; 
	vector<string> v = { "69", "69a", "a69", "5.6", "68", "\t11", "68 69", "0xA" };
	for (auto i = 0; i < v.size(); i++)
	{
		outputNum(v[i]);
	}
	//Still incorrectly does v[2] and v[6]
}