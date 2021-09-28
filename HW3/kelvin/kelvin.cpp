/*
kelvin.cpp
William Odom Jr.
9/28/2021
Corrected code that was provided, which has a purpose of converting from Celsius to Kelvin 
*/

//Added iostream and using std::cin and std::cout since code was written with that in mind

#include <iostream>
#include <iomanip>

using std::cin; 
using std::cout; 

//formula is supposed to return a double, so we need k to be a double, not an int
//Also need to return k, not int, which is just a name not a specific var to return.
//Added if statement to deal with not real temperatures below 0, simply closes program if this occurs. 
double ctok(double c) 
{
	double k = c + 273.15;
	if (k <= 0)
	{
		cout << "That is not a real temperature! It's below absolute 0";
		return -1; 
	}
	return k; 
}

//taking in a variable d makes no sense since it was not defined, changed to c
//double k has been set to the result of a function call that uses a character as it's input
//change character c to variable c
//Cout is capitilized making it unusable, changed to lowercase cout to work
//changed '/n' to std::endl
int main()
{
	double c = 0;  
	cin >> c; 
	double k = ctok(c);
	if (k == -1)
	{
		return 0; 
	}
	cout << k << std::endl;
}