/*
Lb24.cpp
William Odom Jr.
11/10/2021
Playing with STL algorithms avaliable to us
*/

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector; 

#include <iterator>
using std::begin; 
using std::end;

#include <algorithm>
using std::sort; 
using std::reverse; 
using std::fill; 

int main()
{
	vector<int> v = {
		2, 3, 4, 19, 20, 4, 7, 10, 1, 9
	};

	cout << "The original vector is: " << endl;
	for (size_t i : v)
	{
		cout << i << ", "; 
	}
	cout << endl;

	vector<int> vs = v; //vs = Vector sorted
	auto iter1 = vs.begin();
	auto iter2 = vs.end();
	sort(iter1, iter2);
	cout << "The sorted vector is: " << endl; 
	for (size_t i : vs)
	{
		cout << i << ", ";
	}
	cout << endl;

	vector<int> vr = v; //vr = Vector reversed
	auto iter3 = vr.begin();
	auto iter4 = vr.end();
	reverse(iter3, iter4);
	cout << "The reversed vector is: " << endl;
	for (size_t i : vr)
	{
		cout << i << ", ";
	}
	cout << endl;

	vector<int> vf = v; //vs = Vector filled
	auto iter5 = vf.begin();
	auto iter6 = vf.end();
	fill(iter5, iter6, 777);
	cout << "The vector filled with lucky 777 is: " << endl;
	for (size_t i : vf)
	{
		cout << i << ", ";
	}
	cout << endl;
}