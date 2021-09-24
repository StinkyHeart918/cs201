/*
lab8.cpp
William Odom jr.
9/24/2021
Uses function doInput calls getInt and compute squares an integer.
*/

#include "intio.hpp"
#include <iostream>

using std::cout; 
using std::cin; 

//Uses getInt and returns the int recieved from the user
int doInput() 
{
	int hold = 0;
	hold = getInt();
	return hold; 
}

//takes an int and squares it
int compute(int n) 
{
	int final = 0;
	final = n * n; 
	return final; 
}