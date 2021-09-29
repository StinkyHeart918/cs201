/*
Lb10.cpp
William Odom Jr.
9/24/2021
Runs through all numbers 1-40 and checks if they are divisible by 3
*/

#include <iostream>
#include "isDiv3.hpp"

using std::cout;
using std::endl;

//main describes what is being done by this program to user and goes through numbers 1-40 
//putting them through function isDiv3
int main()
{
	cout << "I shall list numbers divisible by 3, checking the numbers from 1 to 40" << endl;;
	for (int i = 1; i < 41; i++)
	{
		if (isDiv3(i)) //Can use !isDiv3 to say is not div 3, ie what is false for this bool? 
		{
			cout << "The number " << i << " is divisible by 3." << endl;
		}
	}
}