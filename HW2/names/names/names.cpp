/*
names.cpp
William Odom Jr. 
9/18/2021
Uses several functions to input names from the user and does... something? 
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin; 
using std::endl; 
using std::vector; 
using std::string; 
using std::getline;

int main()
{
	vector<string> names; 
	for (int i = 0; i < 10; i++) //accepts names from the user
	{
		string name; 
		cout << "Please enter a name." << endl;
		getline(cin, name);
		names.push_back(name);
	}
	for (string name : names) //print, in order of entering, the names entered
	{
		std::cout << name << ", ";
	}
}

//void InputNames(vector<string>& names)
//{

//}

//bool DoesNameExist(const string& nameToFind, const vector<string>& names)
//{

//}

//void PrintNames(const vector<string> & names)
//{

//}

