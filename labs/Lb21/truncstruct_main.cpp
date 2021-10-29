/* 
truncstruct_main.cpp
William Odom Jr. 
10/29/2021

*/

#include "truncstruct.hpp"
#include <iostream>
using std::cin; 
using std::cout; 
using std::endl;

#include <sstream>
using std::ostringstream;

#include <string>
using std::string; 

int main()
{
	ostringstream oss1;
	string str = "";
	cout << "Please enter a string." << endl;
	cin >> str;
	StringInfo stuff = trunc8(str);
	oss1 << "Your new string is " << stuff.str << " with length " << stuff.len;
	cout << oss1.str(); 
}