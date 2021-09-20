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

bool DoesNameExist(const string& nameToFind, const vector<string>& names)
{
	std::find(names.begin(), names.end(), "nameToFind");
	return 1;
}

void InputNames(vector<string> & names)  //accepts names from the user
{
	for (int i = 0; i < 10; i++) 
	{
		string name;
		cout << "Please enter a name." << endl;
		getline(cin, name);
		if (DoesNameExist(name, names) == 0)
		{
			cout << "You used that name already!" << endl; 
		}
		names.push_back(name);
	}
}

void PrintNames(const vector<string> & names) //print, in order of entering, the names entered
{
	for (string name : names) 
	{
		std::cout << name << ", ";
	}
}

int main()
{
	vector<string> names;
	InputNames(names);
	PrintNames(names);
}