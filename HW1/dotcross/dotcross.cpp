/*
dotcross.cpp
William Odom Jr.
9/8/2021
Program that take a user input for vectors, then outputs the dot product and cross product. 
*/

#include <iostream>
using std::cin; 
using std::cout; 
using std::endl;

int main()
{
	int Ax = 0; int Ay = 0; int Az = 0; int Bx = 0; int By = 0; int Bz = 0; //make these floats when you confirm how
	
	cout << "Please enter the 3D vectors you want to dot and cross multiply starting with vector A: " << endl;
	cout << "X = "; 
	cin >> Ax;
	cout << "Y = ";
	cin >> Ay;
	cout << "Z = ";
	cin >> Az; 
	cout << "Now for vector B: " << endl;
	cout << "X = ";
	cin >> Bx;
	cout << "Y = ";
	cin >> By;
	cout << "Z = ";
	cin >> Bz;
	cout << "A dot B = " << endl;
	cout << "A cross B = ";
}