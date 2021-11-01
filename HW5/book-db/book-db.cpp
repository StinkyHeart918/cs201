/*
book-db.cpp
William Odom Jr.
10/31/2021
Program allows user to check various facts about their book collection
*/

#include <vector>
using std::vector; 

#include <string>
using std::string; 

#include <iostream>
using std::cin;
using std::cout; 
using std::endl;

#include <sstream>
using std::ostringstream;

struct Book {
	string ISBN; 
	string Title; 
	string Author;
	int Year;
	bool Loan;
};

void List(const vector<Book> & MyBooks)
{

}

bool Loaned(const vector<Book>& MyBooks)
{
	return true; 
}

bool NotLoaned(const vector<Book>& MyBooks)
{
	return true; 
}

bool SearchISBN(const vector<Book>& MyBooks)
{
	return true; 
}

int main()
{
	vector<Book> MyBooks{
		{"9009909099-0", "Bobert's Bob", "Bob Bob Bob", 1990, true},
		{"8009909099-0", "Cobert's Bob", "Cob Bob Bob", 1991, false}
	};
	bool working = true; 
	int input; 
	int input2;
	string searchFor = "";
	int year = 0000; 


	cout << "Hello!" << endl;
	while (working)
	{
		cout << "Please select an action by typing a number." << endl;
		cout << "1: List Books in Collection" << endl;
		cout << "2: List Books in Loaned Out" << endl;
		cout << "3: List Books in Books Not Loaned Out" << endl;
		cout << "4: Search for a Book" << endl;
		cout << "5: End Program" << endl;
		cin >> input; 
		if (input == 1)
			List(MyBooks);
		if (input == 2)
			Loaned(MyBooks);
		if (input == 3)
			NotLoaned(MyBooks);

		if (input == 4)
		{
			//Handles what method the user wants to search with
			while (working)
			{
				cout << "How would you like to look for this book?" << endl;
				cout << "1: Search by ISBN" << endl;
				cout << "2: Search by Title" << endl;
				cout << "3: Search by Author" << endl;
				cout << "4: Search by Year" << endl;
				cout << "5:  Go Back" << endl;
				cin >> input2; 
				if (input2 == 1)
					SearchISBN(MyBooks);
				if (input2 == 5)
					break;
				else 
					cout << "Oops! That's not a valid input. Please try again. " << endl;
			}
		}
		if (input == 5)
			working = false; 
		else
			cout << "Oops! That's not a valid input. Please try again. " << endl;
	}
}