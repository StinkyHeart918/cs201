/*
read_average_main.cpp
William Odom Jr.
Program will first read and count the number of times each word occurs within a file. 
Afterwards, the program will calculate the average distance between any given words. 
*/

#include <iostream>
using std::cin; 
using std::cout;
using std::endl;
using std::pair;

#include <fstream>
using std::ifstream;

#include <iomanip>
using std::setw;

#include <cmath>
using std::abs;

#include <vector>
using std::vector; 

#include <string>
using std::string;

int isWordAlreadyAdded(const vector<pair<string, int>> count, const string newWord)
{
	for (size_t i = 0; i < count.size(); i++)
	{
		if (count[i].first == newWord)
		{	  
			return i;
		}
	}
	return 0;
}


//Reads the file and confirms that it can close again. 
void read_file()
{

}

//use vector<pair<string, int>> count and vector<pair<string, int>> location
//count: checks if the string word is already in count, if so add to the associated number
//otherwise, which is it's respective int, otherwise add a new entry and give it an int of 1.
// 
//location: every single word, repeat or not, gets added to this vector, and the int is it
//orignal place in the file. 
// 
//Both functions should be prepared within this function, but are defined as part of a class,
//or are universal variables. Either works here
void classify_words()
{

}

//Does a simple sequential search, returning either the location within the vector 
//of the desired word, or returns something out of the range of vector location. 
//The later is used to identify a failure to locate desired string. 
int searchWord(const vector<pair<string, int>> location, const string word, int t)
{
	for (int ii = t; ii < location.size(); ii++)
	{
		if (location[ii].first == word)
			return ii;
		else
			return location.size() + 1; 
	}
}

//Look at the file and pick out the average distance between a CHOSEN pair of words, 
//chosen by the user. Read the locations where each word has been found (possibly from
//another part of a struct) and take the average of distance between each. 
bool average_words(const vector<pair<string, int>> location)
{
	//Variables and initial prompt
	string word1 = "a"; string word2;
	int l1; int l2; int total = 0; int n = 0;
	int over = location.size() + 1; 
	cout << "Please choose two of the aforementioned words and I will ";
	cout << "find the average distance between them!" << endl;
	cout << "OR type END to end" << endl;

	//User input
	cin >> word1; 
	if (word1 == "END")
		return false;
	cin >> word2; 
	if (word1 == word2)
	{
		cout << "Whoops! Those are the same word. " << endl;
		return true;
	}

	for (int t = 0; t < location.size(); t++)
	{
		l1 = searchWord(location, word1, t);
		if (l1 != over)
		{
			for (int tt = 0; tt < location.size(); tt++)
			{
				l2 = searchWord(location, word2, tt);
				if (l2 != over)
				{
					total = total + abs(location[l1].second - location[l2].second);
					n++; 
				}
			}
		}
	}
	if (n == 0)
	{
		cout << "Oops! One or more words entered aren't present in this file!"; 
		cout << " Please try again" << endl;
		return true; 
	}
	else
	{
		cout << "The average distance between " << word1 << " and " << word2;
		cout << " is " << total / n << " words." << endl;
	}
	return true; 
}

//STEPS: 
//1) Open the file, throw error otherwise
//2) Establish either a pair or struct or class which holds information on:
//	 string of the word, number of occurrances, location within the file of occurances 
//	 This could require two seperate things, ie a pair for the first bit and another 
//	 pair holding all words and locations represented by its location. 
//3) Output the number of occurrances for each word in a readable format
//4) Ask user for two words to compare
//5) Find distance between each location where word1 and word2 exist. 
//6) Output the average of these distances, and repeat 4 until user inputs something to end

int main()
{
	string file = "Practice.txt"; //my file for this demo
	int i = 1; int j = 0;
	string next; //For words to be read in from file
	vector<pair<string, int>> location; //holds every single word and it's relative location
	vector<pair<string, int>> count = { {"",0} }; //holds every word once and how many times it's seen
	string word1; string word2; //For user input


	ifstream fin(file);

	if (!fin) {
		cout << "Error opening file" << endl;
		return false;
	}
	else
	{
		while (fin)
		{
			fin >> next;
			//cout << next << endl;

			//Checks for EOF so it can end program. 
			if (!fin)
			{
				if (fin.eof())
				{
					//for (auto k = 0; k < location.size(); k++)
					//	cout << "Word: " << location[k].first << " Location: " << location[k].second << endl;

					for (auto m = 1; m < count.size(); m++)
						cout << "Word: " << count[m].first << " Count: " << count[m].second << endl;

					while(average_words(location))
					{
						//Yes, it's empty here
					}
					return 7;
				}
				else
				{
					cout << "ERROR REACHING EOF" << endl;
					return false;
				} 
			}
			location.push_back({ next, i });
			i++;

			j = isWordAlreadyAdded(count, next);
			if (j != 0)
			{
				count[j].second = count[j].second + 1;
				j = 0;
			}
			else
				count.push_back({ next, 1 });
		}
	}
}