/*
Lb23.cpp
William Odom 
11/10/2021
Creates an empty map and prints out keys 
*/

#include <iostream>
using std::cout; 
using std::endl;

#include <map>
using std::map; 

#include <string>
using std::string; 

int main()
{
	map<string, int> m; 
	m["dumb"] = 20;
	m["smart"] = 15;
	m["nice"] = 35;
	m["oops"] = 5; 
	m["Hi"] = 50; 
	cout << "Your whole list of keys-value pairs is: " << endl; 
	for (const auto & i : m)
	{
		auto k = i.first;
		auto p = i.second;
		cout << k << " " << p << endl;
	}
	m.erase("dumb"); 
	cout << "Your whole list without dumb is: " << endl;
	for (const auto& i : m)
	{
		auto k = i.first;
		auto p = i.second;
		cout << k << " " << p << endl;
	}
}