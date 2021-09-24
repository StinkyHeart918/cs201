/*
Lb10.cpp
William Odom Jr.
9/24/2021
Runs through all numbers 1-40 and checks if they are divisible by 3
*/

#include <iostream>

using std::cout;
using std::endl;

//Takes an integer and tests if it is divisible by 3, returns true if it is, false otherwise
bool isDiv3(int test) 
{
	if (test % 3 == 0)
	{
		return true;
	}
	else
	{
		return false; 
	}
}

//main describes what is being done by this program to user and goes through numbers 1-40 
//putting them through function isDiv3
int main()
{
	cout << "I shall list numbers divisible by 3, checking the numbers from 1 to 40" << endl;;
	for (int i = 1; i < 41; i++)
	{
		if (isDiv3(i) == true)
		{
			cout << "The number " << i << " is divisible by 3." << endl;
		}
	}
}