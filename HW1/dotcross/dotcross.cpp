/*
dotcross.cpp
William Odom Jr.
9/8/2021
Program that take a user input for vectors, then outputs the dot product and cross product. 
*/

#include <iostream>
#include <iomanip>
using std::cin; 
using std::cout; 
using std::endl;

int main()
{
	std::setprecision(5);
	double Ax = 0; double Ay = 0; double Az = 0; double Bx = 0; double By = 0; double Bz = 0; 
	double Cx = 0; double Cy = 0; double Cz = 0; double dot = 0; 
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
	cout << "A dot B = " << dot << endl;
	cout << "A cross B = <" << Cx << ", " << Cy << ", " << Cz << ">";
}