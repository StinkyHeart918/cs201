/*
money.cpp
William Odom Jr.
9/19/2021
Takes the numbers of varios coins and prints out their total value.
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int pennys; int nickles; int dimes; int quarters; int half; 
	double total; double dollars;
	//Requests input of what coins there are. 
	cout << "Please enter number of penny's : ";
	cin >> pennys;
	cout << "Please enter number of nickles : ";
	cin >> nickles;
	cout << "Please enter number of dimes : ";
	cin >> dimes;
	cout << "Please enter number of quarters : ";
	cin >> quarters;
	cout << "Please enter number of half dollar coins : ";
	cin >> half;
	//Caluculates total coin value and dollar value
	total = pennys + 5 * nickles + 10 * dimes + 25 * quarters + 50 * half;
	dollars = total/100;
	//Prints out the coins input and new totals
	cout << "You have " << pennys << " penny's" << endl;
	cout << "You have " << nickles << " nickles" << endl;
	cout << "You have " << dimes << " dimes" << endl;
	cout << "You have " << quarters << " quarters" << endl;
	cout << "You have " << half << " half dollars" << endl;
	cout << "You have " << total << " cents" << endl;
	cout << "You have $" << dollars << " dollars" << endl;
}

