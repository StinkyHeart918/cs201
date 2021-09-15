/*
Lb07
William Odom Jr.
9/15/2021
Uses intio.hpp and intio.cpp and inputs 3 numbers using getInt then prints in a column using putInt
*/

#include <iostream>
#include "intio.hpp"
using std::cout; 
using std::endl;

int main()
{
	int min = 7; //minimum characters 
	int got = 0; int got2 = 0; int got3 = 0; // our three holding integers
	std::cout << "Please enter 3 integers: "; 
	cout << endl;
	got = getInt(); //this function gets 3 integers and makes sure it's actually an integer
	got2 = getInt();
	got3 = getInt();
	putInt(got, min); //prints our 3 integers in a column structure
	cout << endl;
	putInt(got2, min);
	cout << endl; 
	putInt(got3, min);
	cout << endl;
	return 0;
}