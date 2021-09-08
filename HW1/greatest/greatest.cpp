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
	int temp = 1; int great = 0; //temp = 1 so program doesn't immediately end, great = 0 to have a distinct starting point to check back to. 
	cout << "Please enter a sequence of positive integers, ending the sequence with a 0. This program will print out the greatest integer entered." << endl; 
	while (temp > 0) //Once temp <= 0 we get to skip this loop, right to then end. 
	{
		cout << "Please enter an integer: ";
		cin >> temp;
		if (temp >= 0) //Check if temp is a positive integer OR 0
		{
			if (temp > great)
			{
				great = temp; 
			}
		}
		else //Bad numbers that we don't want for this program, cut the user off there. 
		{
			cout << "That is not a valid entry. " << endl;
			break; 
		}
	}
	if (great == 0) //Since great never changed, the user never entered a positive integer, so they should know that. 
	{
		cout << "No positive integers entered" << endl; 
		return 1; //One ending of the program
	}
	cout << "Your greatest integer in the sequence was " << great << endl; 
	return 2;  //Second ending of the program
	
}