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
	int i = 0; int j = 1; int counter; int counter2 = 0; int length;
	cout << "Please enter the number for the size of diamond you would like to be made: ";
	cin >> length; 
	if (length > 0)
	{
		counter = 1; 
		while (i < length)
		{
			while (j < length)
			{
				cout << " ";
				j++;
			}
			while (counter > 0)
			{
				cout << "#";
				counter--;
			}
			while (counter2 > 0)
			{
				cout << "#";
				counter2--;
			} 
			cout << endl;
			i++;
			counter = i + 1;
			counter2 = i; 
			j = i + 1; 
		}

		return length; 
	}
	else //In case someone enters an invalid character or number. 
	{
		cout << "Sorry, that is not a valid entry." << endl; 
		return 0; 
	}
}