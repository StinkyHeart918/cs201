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
	int i = 0; int j = 1; int counterfront = 1; int counterback = 0; int length;
	cout << "Please enter the number for the size of diamond you would like to be made: ";
	cin >> length; 
	if (length > 0) //Verify that it is in fact a number entered
	{
		while (i < length) //This while loop makes the top half of the diamond successfully
		{
			while (j < length)
			{
				cout << " ";
				j++;
			}
			while (counterfront > 0)
			{
				cout << "#";
				counterfront--;
			}
			while (counterback > 0)
			{
				cout << "#";
				counterback--;
			} 
			cout << endl;
			i++;
			counterfront = i + 1;
			counterback = i; 
			j = i + 1; 
		}
		i = length - 2; 
		j = length - 1; 
		counterfront = i + 1; 
		counterback = i; 
		while (i > 0)
		{
			while (j < length)
			{
				cout << " ";
				j++;
			}
			while (counterfront > 0)
			{
				cout << "#";
				counterfront--;
			}
			while (counterback > 0)
			{
				cout << "#";
				counterback--;
			}
			cout << endl;
			i--;
			counterfront = i + 1;
			counterback = i;
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