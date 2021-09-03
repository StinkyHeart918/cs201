/*
L02pt2
William Odom Jr.
9/1/2021
Addition program to take and print out a birthday
*/

#include <iostream>
using std::cin;
using std::cout; 
using std::endl;

int main()
{
	int day, month, year; //Obvious naming scheme to be clear 
	cout << "Please enter the numeric representation of you birthday: " << endl;
	cout << "Day: "; 
	cin >> day; 
	cout << "Month: "; 
	cin >> month; 
	cout << "Year: "; 
	cin >> year; 
	cout << "Your birthday is: " << month << "/" << day << "/" << year << endl; //Prints date as it was input in correct order. 
	//If we exlude either lines below up until the return 0 or the line above we will get one version of the date, not two. 
	cout << "Your birthday is: ";
	cout << year << "-";
	if (month < 10)
	{
		cout << "0";
	}
	cout << month << "-";
	if (day < 10)
	{
		cout << "0";
	}
	cout << day; 
	return 0; 
}