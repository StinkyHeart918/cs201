/*
L04
William Odom Jr.
9/9/2021
Program goes through numbers 1-100 and tests if they are divisible by 3.
*/

#include <iostream>
using std::cin; 
using std::cout;
using std::endl;

int main()
{
	int n = 0;
	cout << "'MAGIC' 8 BALL" << endl;
	cout << "Think of a question then enter an integer from 1-8 and I will advise you." << endl;
	cout << "Enter here: ";   
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "Yes";
		break; 
	case 2: 
		cout << "Maybe";
		break;
	case 3:
		cout << "Definetly not";
		break;
	case 4: 
		cout << "Try another time";
		break;
	case 5:
		cout << "As if!";
		break;
	case 6:
		cout << "No";
		break;
	case 7:
		cout << "Chances are good";
		break;
	case 8:
		cout << "Why would you want that?";
		break;
	default:
		cout << "You didn't put in a valid number. No advice for you.";
		break;
	}
}