/*
greatest.cpp
William Odom
9/8/2021
This program will take integers until a 0 is entered, at which point it spits out the biggest int entered.
*/

#include <iostream>
using std::cin; 
using std::cout; 
using std::endl;

int main()
{
	int temp = 1; int great = 0;
	cout << "Please enter a sequence of positive integers, ending the sequence with a 0. This program will print out the greatest integer entered." << endl; 
	while (temp > 0)
	{
		cout << "Please enter an integer: ";
		cin >> temp;
		if (temp >= 0)
		{
			if (temp > great)
			{
				great = temp; 
			}
		}
		else
		{
			cout << "That is not a valid entry. " << endl;
			break; 
		}
	}
	if (great == 0)
	{
		cout << "No positive integers entered" << endl;
		return 1;
	}
	cout << "Your greatest integer in the sequence was " << great << endl; 
	return 2; 
	
}