#include "modifyString.hpp"
#include <iostream>
#include <string>

using std::string; 

int modifyString(std::string& referencedString, int n)
{
	int length = 0; 
	string addition = "Hi";  string referenceString = "Hello";
	addition = std::to_string(n % 10);
	referenceString.append(addition);
	length = size(referenceString);
	return length; 
}