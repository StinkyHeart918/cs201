/*
userInput.cpp
William Odom
9/29/2021
*/

#include "userInput.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::vector; 
using std::string; 
using std::cout; 
using std::cin; 

void getUserStrings(std::vector<std::string>& words)
{
	int i = 0;
	string word; 
	for (int i = 0; i < 100; i++)
	{
		cout << "Enter string here: ";
		cin >> word;
		if (word == "end")
		{
			break; 
		}
		words.resize(i + 1);
		words[i] = word; 
	}
}