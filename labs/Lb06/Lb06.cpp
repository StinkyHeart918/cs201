/*
Lb06.cpp
William Odom 
9/13/2021
Function that takes a string then prints it back out and it's length
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string; 

/*Accepts an input for a string and then outputs the string followed by it's length. */
void stringComp(string hold)
{
	cout << "You input the string: " << hold << endl;
	cout << "This had length: " << hold.size() << endl;
}

int main()
{
	stringComp("hello");
	stringComp("No");
	return 0; 
}