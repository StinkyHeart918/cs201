/*
lb03p2.cpp
William Odom Jr.
9/3/2021
Program for lab3 which make a grid of a character using multiple while loops.
*/

#include <iostream>
using std::cout; 
using std::endl; 

int main()
{
	int i = 1, j = 1;
	while (i <= 10)
	{
		while (j <= 60)
		{
			cout << "!";
			++j;
		}
		cout << endl; 
		j = 1; 
		++i; 
	}
	return 0; 
}
