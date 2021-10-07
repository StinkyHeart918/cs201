/*
tokenizer.cpp
William Odom Jr.
10/6/2021

*/

#include <iostream>
#include <vector>
#include <string>
#include "tokenizer.hpp"

using std::cout;
using std::endl;
using std::string; 
using std::vector;

int main()
{
	string str; 
	vector<string> token; 
	cout << "Please enter some text. Once you finish, type 'end', 'END', or 'End' to stop the program: " << endl;
	ReadLine(str);
	cout << str;
}