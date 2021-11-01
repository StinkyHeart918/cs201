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
using std::istringstream; 
using std::ostringstream;

struct Book { 
	string Title; 
	string Author;
	string Year;
	string ISBN;
	bool Loan;
};

void List(const vector<Book> & MyBooks)
{
	ostringstream oss1;
	oss1 << endl << "Your loaned books are: " << endl;
	for (auto book : MyBooks)
		oss1 << book.Title << ", " << book.Author << ", " << book.Year << ", " << book.ISBN << endl;
	oss1 << endl;
	cout << oss1.str();
}

void Loaned(const vector<Book>& MyBooks)
{
	ostringstream ossl; 
	ossl << endl << "Your loaned books are: " << endl;
	for (auto book : MyBooks)
		if (book.Loan)
			ossl << book.Title << ", " << book.Author << ", " << book.Year << ", " << book.ISBN << endl;
	ossl << endl;
	cout << ossl.str();
}

void NotLoaned(const vector<Book>& MyBooks)
{
	ostringstream ossnl; 
	ossnl << endl << "Your not loaned books are: " << endl;
	for (auto book : MyBooks)
		if (!book.Loan)
			ossnl << book.Title << ", " << book.Author << ", " << book.Year << ", " << book.ISBN << endl;
	ossnl << endl;
	cout << ossnl.str();
}

void SearchStr(const vector<Book>& MyBooks, string target, int type)
{

}

void SearchPrompt(const vector<Book>& MyBooks)
{
	int input;
	bool working = true;
	string target; 
	while (working)
	{
		cout << "How would you like to look for this book?" << endl;
		cout << "1: Search by ISBN" << endl;
		cout << "2: Search by Title" << endl;
		cout << "3: Search by Author" << endl;
		cout << "4: Search by Year" << endl;
		cout << "5: Go Back" << endl;
		cin >> input;
		if (input > 0 && input < 5)
		{
			if (input == 1)
				cout << "What is the ISBN? Be sure to include dash marks where necessary:" << endl;
			if (input == 2)
				cout << "What is the full title?:" << endl;
			if (input == 3)
				cout << "What is the author's full name?:" << endl;
			if (input == 4)
				cout << "What is the year?:" << endl;

			getline(cin, target);//WHY DOESN"T IT GET THE LINE????? IT"S NOT ACTUALLY ALLOWING USER INPUT HERE
			SearchStr(MyBooks, target, input);
		}
		if (input == 5)
			working = false;
		if (input < 1)
			cout << "Oops! That's not a valid input. Please try again. " << endl;
		if (input > 5)
			cout << "Oops! That's not a valid input. Please try again. " << endl;
	}
}

int main()
{
	vector<Book> MyBooks{
		{"Bobert's Bob", "Bob Bob Bob", "1990", "9009909099-0", true},
		{"Cobert's Bob", "Cob Bob Bob", "1991", "8009909099-0", false}
	};
	bool working = true; 
	int input; 

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
			SearchPrompt(MyBooks);
		if (input == 5)
			working = false; 
		if(input < 1)
			cout << "Oops! That's not a valid input. Please try again. " << endl;
		if (input > 5)
			cout << "Oops! That's not a valid input. Please try again. " << endl;
	}
}