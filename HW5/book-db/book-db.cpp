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

/*
Prints out all book in order that they are stored within the vector
*/
void List(const vector<Book> & MyBooks)
{
	ostringstream oss1;
	oss1 << endl << "Your whole collection of books is: " << endl;
	for (auto book : MyBooks)
		oss1 << book.Title << ", " << book.Author << ", " << book.Year << ", " << book.ISBN << endl;
	oss1 << endl;
	cout << oss1.str();
}

/*
Prints out all book classified as loaned
*/
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

/*
Prints out all book classified as not loaned
*/
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

/*
This functino does the searching, and if there are multiple books which satisfy a desired condition 
will print all the apply. 
*/
void SearchStr(const vector<Book>& MyBooks, string target, int type)
{
	ostringstream osssearch; 
	for (auto book : MyBooks)
	{
		if (type == 1)
			if (book.ISBN == target)
				osssearch << book.Title << ", " << book.Author << ", " << book.Year << ", " << book.ISBN << endl;
		if (type == 2)
			if (book.Title == target)
				osssearch << book.Title << ", " << book.Author << ", " << book.Year << ", " << book.ISBN << endl;
		if (type == 3)
			if (book.Author == target)
				osssearch << book.Title << ", " << book.Author << ", " << book.Year << ", " << book.ISBN << endl;
		if(type == 4)
			if (book.Year == target)
				osssearch << book.Title << ", " << book.Author << ", " << book.Year << ", " << book.ISBN << endl;
	}
	osssearch << endl;
	cout << osssearch.str();
}

/*
Prompt user to determine what type of term they want to search with and what the search is for
*/
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
		//Why do I need this one (below) for the program to properly work where I want it too? I want the 
		//getline to occur AFTER saying what search we are prompting for. 
		getline(cin, target); 
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

			getline(cin, target);
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

/*
Sets up our vector of books, for purpose of this assignment, and then prompts user for
commands on what to do. 
*/
int main()
{
	vector<Book> MyBooks{//First 4 are a real set of books, the rest are made up for this project
		{"Eragon", "Christopher Paolini", "2002", "9780375826689", true},
		{"Eldest", "Christopher Paolini", "2005", "9780375840609", true},
		{"Brisingr", "Christopher Paolini", "2008", "9780375826726", false},
		{"Inheritance", "Christopher Paolini", "2011", "9780375846311", true},
		{"Cobert's Bob: A Legend", "Cob Bob Bob", "1991", "8009909099-0", true}, 
		{"Cobert's Bob: A Legend", "Cob Bob Bob", "1991", "8009909099-0", false},
		{"Tractor's for Fun", "Rob B. Sand", "1871", "1234567890", false},
		{"Building a House", "Dob Cob", "2014", "83199-09099-0", true},
		{"Business Skills", "Lob Job", "2020", "8008787931-3", true},
		{"Scientific Introduction to Trigonometry", "Snobby Toby", "1999", "7776637183", false},
		{"Fighting Your Destiny", "Johnny Joestar", "2002", "5-34422985-0", true},
		{"Baking for Beginners", "Chippy Chipson", "2016", "4995301122", false},
		{"City Planning Essentials and Theory", "Don Douglas", "2010", "009-90244-31", false},
		{"Path to Success", "Mario Mario", "2001", "599857721", false},
		{"Dealing with Failure", "Luigi Mario", "1970", "22312544-234", false},
		{"Counting Colors", "Steven Brown", "1963", "876654321", false},
		{"Cobert's Bob: A Legend", "Cob Bob Bob", "1991", "8009909099-0", false},
		{"When Will We W?: Why W is Awesome", "William Walter", "2005", "8817849-66", false},
		{"Fighting Your Destiny", "Johnny Joestar", "2002", "5-34422985-0", false},
		{"Eldest", "Christopher Paolini", "2005", "9780375840609", true},
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