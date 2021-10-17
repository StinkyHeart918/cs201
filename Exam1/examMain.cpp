#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin; 
using std::endl; 

using std::vector; 
using std::string; 

float sumVector(const vector<float>& v)
{
	float final = 0;
	for (auto n : v) 
		final = final + n;
	return final; 
}
	//This tests sumVector
	/*
	vector<float> v = { 0.2, 0.4, 0.6, 0.8, 1 };
	float tot = sumVector(v);
	cout << tot;
	*/

bool isSorted(vector<int> nums)
{
	int check = 0;
	for (int i = 0; i < nums.size() - 1; i++) //Checks if always increasing
	{
		if (nums[i] > nums[i + 1])
		{
			check++;
			break; //Breaks the loop if it fails even one check for always increasing
		}
	}
	for (int i = 0; i < nums.size() - 1; i++) //Checks if always decreasing
	{
		if (nums[i] < nums[i + 1])
		{
			check++;
			break; //Breaks the loop if it fails even one check for always decreasing
		}
	}
	//Should vector v be sorted, it will have a 1 here, otherwise has 2 and is not sorted
	if (check == 1)
		return true;
	else
		return false;
}

	//This tests isSorted
	/*
	vector<int> v = { 0, 1, 2, 3 }; //increasing
	vector<int> l = { 4, 3, 2, 1 }; //decreasing
	vector<int> k = { -1, 2, 4, -2 }; //starts increasing, fails
	vector<int> d = { 5, 3, 1, 8 }; //starts decreasing, fails
	if (isSorted(v))
	{
		cout << "Yay! X 1" << endl;
	}
	if (isSorted(l))
	{
		cout << "Yay! X 2" << endl;
	}
	if (isSorted(k))
	{
		cout << "Yay! X 3" << endl;
	}
	if (isSorted(d))
	{
		cout << "Yay! X 4" << endl;
	}
	*/

void PrintSubStrings(std::string str)
{
	string substring = "";
	for (int i = str.size() - 1; i > -1; i--) 
	{
		for (int j = 0; j < str.size(); j++)
		{
			substring = str.substr(j, str.size() - i);
			cout << substring << endl;
			if (j == i)
				break; 
		}
	}
}
	//This tests PrintSubStrings
	/*
	string s = "abcd";
	PrintSubStrings(s);
	*/

int ReadInt(string prompt, int min, int max)
{
	int input = 0;
	bool inRange = false;
	while(!inRange)
	{
		cout << prompt << endl;
		cin >> input;
		//Notice we don't need to change inRange, but could to ensure clarity
		if (min - 1 < input && input < max + 1)
		{
			break; 
		}
		cout << "Oops, that number is out of the range!" << endl;
	}
	return input; 
}
	//This tests ReadInt
	/*
	string prompt = "Please enter an exam score!";
	int min = 0;
	int max = 100;
	int score = ReadInt(prompt, min, max);
	cout << score;
	*/


int main()
{

}