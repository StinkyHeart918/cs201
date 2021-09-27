/*
boxerprint.cpp
William Odom Jr.
9/27/2021
Calls to function that requests user input and print out a boxed statement based on that
*/

#include <iostream>
#include <string>
#include "boxer.hpp"

using std::cout;
using std::endl;
using std::cin; 
using std::string; 

/*void box(int size, string phrase)
{
	int side = sizeof(phrase);
	int gap = side + 2; 
	side = side + 2 * size; 
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < side; j++)
		{
			cout << "*";
		}
	}
}*/

int main()
{
	//Function to get information from user
	string phrase; 
	int size = 0; 
	cout << "Please enter a string: ";
	cin >> phrase;
	if (phrase == "num")
	{
		return 0;
	}
	cout << "Please enter a positive integer: ";
	cin >> size;
	while (size < 1)
	{
		cout << "That is not a positive number, please try again: ";
		cin >> size;
	}

	//Function to print box (SUPER UGLY, not sure exactly how to shorten it though, maybe sub functions?) 
	int side = phrase.length();
	int gap = side + 2;
	side = side + 2 + 2 * size;
	for (int i = 0; i < size; i++) //Makes the size number of full lines
	{
		for (int j = 0; j < side; j++) 
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int k = 0; k < size; k++) //Makes first gaped
	{
		cout << "*"; 
	}
	for (int l = 0; l < gap; l++)
	{
		cout << " "; 
	}
	for (int k = 0; k < size; k++) 
	{
		cout << "*";
	}	
	cout << endl; // ends first gaped
	for (int k = 0; k < size; k++) //makes section around and including phrase line
	{
		cout << "*";
	}
	cout << " " << phrase << " ";
	for (int k = 0; k < size; k++)
	{
		cout << "*";
	}
	cout << endl; //ends phrase line
	for (int k = 0; k < size; k++) // Makes second gaped line
	{
		cout << "*";
	}
	for (int l = 0; l < gap; l++)
	{
		cout << " ";
	}
	for (int k = 0; k < size; k++)
	{
		cout << "*";
	}
	cout << endl; // ends gaped line
	for (int i = 0; i < size; i++) //Makes the size number of line up to end
	{
		for (int j = 0; j < side; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl; 
	//inputInfo(size, phrase);
	//box(size, phrase);
	return 0; 
}