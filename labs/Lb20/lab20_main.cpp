/*
lab20_main.cpp
William Odom Jr.
10/25/2021
Program prints a table of values for every 5th degree starting at 0 up to 180 
and the respective cosine value to 8 decimal places
*/

#include <iostream>
using std::endl;
using std::cout; 

#include <sstream>
using std::ostringstream;

#include <cmath>

#include <iomanip>
using std::setprecision;
using std::setw;

int main()
{
	ostringstream oss1; 
	double rad;
	for (int i = 0; i <= 180; i += 5)
	{
		rad = i * 3.14159265 / 180;
		oss1 << setw(4) << i << ", " << setprecision(8) << cos(rad) << endl;
	}
	cout << oss1.str();
	return 0; 
}