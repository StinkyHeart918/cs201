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
		if (c >= 97) //ascii values from 'a', which equals 97, to 'z' which = 122
		{
			if (c <= 122)
			{
				cout << c;
			}
		}
	}
	return 1; 
}