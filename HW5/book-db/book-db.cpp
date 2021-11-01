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
};

void List(const vector<Book> & MyBooks)
{

}

bool Loaned(const vector<Book>& MyBooks)
{

}

bool NotLoaned(const vector<Book>& MyBooks)
{

}

bool SearchBookISBN(const vector<Book>& MyBooks)
{

}

int main()
{
	vector<Book> MyBooks{
		{"90099090990", "Bobert's Bob", "Bob Bob Bob", 1990},
		{"80099090990", "Cobert's Bob", "Cob Bob Bob", 1991}
	};

}