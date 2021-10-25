/**
 * @file     L19_Floating_Point.cpp
 * @author   Student Name
 * @version  Jan 28, 2019
 * John Quan
 *
 * Useful trigonometric functions.
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
 // using sin, cos
#include <cmath>

#include "floating_point.hpp"

int main() {
	// TODO Turn on "error on warnings" so this doesn't*****************
	// compile.  Make it compile by using std::size_t
	// You can comment this for loop out after that.
	std::vector<int> v{ 1, 2, 3, 4, 5 };
	for (std::size_t i = 2; i < v.size(); ++i) {
		++v[i];
		std::cout << v[i] << std::endl;
	}
	std::cout << std::endl << std::endl;
	// *****************************************************************

	// TODO Declare and initialize a vector of radians by calling*******
	//        degreesToRadians(360).
	//      Print degree,cos(radian),sin(radian) as a comma separated
	//        values (CSV) list.
	std::vector<double> rads= degreesToRadians(360);
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "degrees, cos, sin" << std::endl;
	for (std::size_t i = 0; i < rads.size(); i++)
	{
		std::cout << i << ", " << cos(rads[i]) << ", " << sin(rads[i]) << std::endl;
	}

	// *****************************************************************

	return 0;
}
