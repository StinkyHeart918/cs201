/*
collatz.cpp
William Odom Jr. 
9/27/2021
User inputs a number and fucntion processes it as a collatz function until it reaches 1. 
*/

#include <iostream>

using std::cin; 
using std::cout;
using std::endl;

int main()
{
	int coll = 0; 
	cout << "COLLATZ FUNCTION" << endl;
	for (int i = 0; i < 100; i++)
	{
		cout << "Please enter a natural number and I will show you the Collatz sequence: ";
		cin >> coll; 
		if (coll > 0)
			break;
		else
			cout << "Oops, that's not a natural number. Try an integer greater than 0." << endl;
	}

}