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

bool DoesNameExist(const string & nameToFind, const vector<string> & names) //Checks if the name already exists within our list of names. 
{
	if (std::find(begin(names), end(names), "nameToFind") != std::end(names))
		return false; //name does exist
	else
		return true; // name doesn't exists
}

void InputNames(vector<string> & names)  //accepts names from the user
{
	for (int i = 0; i < 10; i++) 
	{
		string name = "bbbbbb";
//		while (DoesNameExist(name, names) != true)
//		{
			cout << "Please enter a name." << endl;
			getline(cin, name);
//			if(DoesNameExist(name, names) == true)
//				cout << "You've already used that name!" << endl;
//		}
		names.push_back(name);
	}
}

//void PrintNames(const vector<string> & names) //print, in order of entering, the names entered
//{
	//for (string name : names) 
	//{
	//	std::cout << name << ", ";
	//}
//}

void PrintNamesInteresting(const vector<string> & names) //prints the names and their respective size
{
	for (string name : names)
	{
		cout << "The name " << name << " is ";
		cout << size(name) << " characters long including spaces! " << endl;
	}
}

int main()
{
	vector<string> names;
	InputNames(names);
	PrintNamesInteresting(names);
}