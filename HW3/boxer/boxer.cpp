/*
boxer.cpp
William Odom Jr. 
9/27/2021
Pushes functions to main in boxerprint.cpp
*/

#include <iostream>
#include <string>
#include "boxer.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;

//Takes a valid input from user
int inputInfo(int size, std::string& phrase) 
{
	cout << "Please enter num to end or a new string: ";
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
	return size; 
}

void box(int size, std::string& phrase)
{
	//Function to print box (SUPER UGLY, could use sub functions to shorten and clean up) 
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
}