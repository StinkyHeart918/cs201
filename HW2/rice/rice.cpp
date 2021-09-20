/*
rice.cpp
William Odom Jr
9/19/2021
Program calculates amount of rice owed to the inventor of chess for whatever tile he is one and total
*/

#include <iostream>

using std::cout; 
using std::endl; 

int main()
{
	int i = 0; 
	int tile = 1; int rice = 1; int total = 1;
	double til = 1; double ric = 1; double tot = 1; 
	cout << "The number of rice on tile " << tile << " is " << rice << " and in total there are " << total << endl;
	//while (i < 64) //Loop for all rice tiles
	//{
	//	tile++; 
	//	rice = rice * 2; 
	//	total = total + rice;
	//	i++;
	//	cout << "The number of rice on tile " << tile << " is " << rice << " and in total there are " << total << endl;
	//} 
	while (total < 1000) //Loop for getting rice totalling 1000 or more: This gives a total of 10 tiles needed
	{
		tile++;
		rice = rice * 2;
		total = total + rice;
		cout << "The number of rice on tile " << tile << " is " << rice << " and in total there are " << total << endl;
	}
	cout << "You need " << tile << " tiles to get more than 1000 grains of rice" << endl;
	while (total < 1000000) //Loop for getting rice totalling 1000000 or more: This gives a total of 20 tiles needed
	{
		tile++;
		rice = rice * 2;
		total = total + rice;
		cout << "The number of rice on tile " << tile << " is " << rice << " and in total there are " << total << endl;
	}
	cout << "You need " << tile << " tiles to get more than 1000000 grains of rice" << endl;
	while (total < 1000000000) //Loop for getting rice totalling 1000000000 or more: This gives a total of 30 tiles needed
	{
		tile++;
		rice = rice * 2;
		total = total + rice;
		cout << "The number of rice on tile " << tile << " is " << rice << " and in total there are " << total << endl;
	}
	cout << "You need " << tile << " tiles to get more than 1000000000 grains of rice" << endl;
	while (i < 64) //Prints the whole value of the 64 tiles worth of rice, per tile and total. 
	{
		cout << "The number of rice on tile " << til << " is " << ric << " and in total there are " << tot << endl;
		til++; 
		ric = ric * 2; 
		tot = tot + ric;
		i++;
	} 
	cout << "Using an int will overflow values after tile 31, where values will become negative then become one. ";
	cout << "Using a double will work to find all values through to the 64th tile of the board, giving a value of 1.84*10^19 ";
		cout << "grains of rice total.";
	return 0;
}