/*
Lb11.cpp
William Odom Jr.
9/24/2021
Inputs a word from the user and returns the lower case letters used
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin; 
using std::endl;
using std::string; 

int main()
{
	string word = "";
	char c;
	int length; 
	cout << "Please enter a word. I will give you all lower case letters used!:" << endl;
	cout << "Enter word: ";
	cin >> word; 
	length = size(word);
	cout << "Your lower case letters are: ";
	for (int i = 0; i < length; i++)
	{
		c = word[i];
		switch (c)
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':
			cout << c; 
			break;
		}
	}
}