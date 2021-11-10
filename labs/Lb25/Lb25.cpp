/*
Lb25.cpp
William Odom Jr.
11/10/2021
Working with iterators on two vectors
*/

#include <iostream>
using std::cout; 
using std::endl;

#include <vector>
using std::vector; 

#include <algorithm>
using std::mismatch;

#include <iterator>
using std::begin; 
using std::end; 

int main() 
{
	//3 vectors, all the same size and share elements, however v3 is ordered
	//v1 and v2 are identical
	vector<int> v1{
		1, 2, 3, 5, 1, 9, 0, 13
	};
	vector<int> v2{
		1, 2, 3, 5, 1, 9, 0, 13
	};
	vector<int> v3{ 
		0, 1, 1, 2, 3, 5, 9, 13
	};

	//make the iterator beginnings and ends
	auto iter1v1 = v1.begin();
	auto iter2v1 = v1.end();
	auto iter1v2 = v2.begin();
	auto iter1v3 = v3.begin();

	//checks if v1 and v2 match
	auto m2 = mismatch(iter1v1, iter2v1, iter1v2);
	if (m2.first != v1.end())
		cout << "Ooop! Mismatch found at position " << *m2.first - 1 << endl;
	else
		cout << "Yay! Vectors v1 and v2 match :)" << endl;

	//checks if v1 and v3 match
	auto m3 = mismatch(iter1v1, iter2v1, iter1v3);
	if (m3.first != v1.end())
		cout << "Ooop! Mismatch found at position " << *m3.first - 1 << endl;
	else
		cout << "Yay! Vectors v1 and v3 match :)" << endl;
}