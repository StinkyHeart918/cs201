/*
substring.cpp
William Odom
10/4/2021

*/

#include <iostream>
#include <string>
#include "substring.hpp"

using std::cout;
using std::endl;
using std::string;

void outputSub(string& word)
{
	cout << "Here's the breakdown of what you entered!:" << endl; 
	for (int i = word.size(); i > 0; i--)
	{
		cout << word.substr(0, i) << endl; 
		//Set up if I was going to do additional parts since I'd need to come in from ends
	}
}