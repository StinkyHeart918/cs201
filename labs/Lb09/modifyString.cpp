#include "modifyString.hpp"
#include <iostream>
#include <string>

using std::string; 

int modifyString(string& referencedString, int n)
{
	int length = 0; 
	int hold = n % 10; 
	string addition = "Hi"; 
	addition = std::to_string(hold);
	referencedString.append(addition);
	length = sizeof(referencedString);
	return length; 
}