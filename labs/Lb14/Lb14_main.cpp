/*
Lb14_main.cpp
William Odom
10/4/2021

*/

#include <iostream>
#include <string>
#include "substring.hpp"

using std::cin; 
using std::cout; 
using std::endl;
using std::string; 

int main()
{
	//Super short input fuction to get word from user
	string word; 
	cout << "Please enter a word!" << endl; 
	cin >> word;

	outputSub(word);
}