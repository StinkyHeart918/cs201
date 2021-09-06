/*
diamond.cpp
William Odom
9/6/2021
Program to take a number from the user and make a diamond of that size. 
*/

#include <iostream>
using std::cin; 
using std::cout;
using std::endl; 

int main()
{
	int i = 0, length; 
	cout << "Please enter the number for the size of diamond you would like to be made: ";
	cin >> length; 
	if (length > 0)
	{
		while(i < length)
		{
			cout << "#";
			i++; 
		}
		cout << endl; 
		return length; 
	}
	else
	{
		cout << "Sorry, that is not a valid entry." << endl; 
		return 0; 
	}
}