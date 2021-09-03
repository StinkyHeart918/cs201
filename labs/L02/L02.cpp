/*
L02.cpp
William Odom Jr.
9/1/2021
Lab 2 program for squaring an integer
*/

#include <iostream>
using std::cout; 
using std::cin; 
using std::endl; 

int main()
{
	int integer, squared; //Obvious names
	cout << "Please enter an interger to square: "; 
	cin >> integer; 
	integer = integer + 1;
	squared = integer * integer; 
	cout << "Your squared integer is " << squared << endl; 
	return 0; 
}