/*
L04
William Odom Jr.
9/9/2021
Program goes through numbers 1-100 and tests if they are divisible by 3.
*/

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int i = 1; 
	cout << "I will print out all numbers from 1-100 and identify those divisible by 3 as 'Fizz'" << endl;
	while (i < 101)
	{
		if (i % 3 != 0)
		{
			cout << i << endl;
		}
		else
		{
			cout << "Fizz" << endl;
		}
		i++;
	}
}