/*
tokenizertest.cpp
William Odom Jr.
10/6/2021

*/

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "tokenizer.hpp"

using std::cin; 
using std::cout; 
using std::endl;
using std::string; 
using std::getline; 
using std::istringstream; 

bool ReadLine(std::string& str)
{
	str = "";
	getline(cin,str); //gets user input
	if (str != "") //if str is NOT blank return true
		return true;
	else
		return false; 
}

unsigned StringToTokensWS(const std::string& input, std::vector<std::string>& tokens)
{
	//Reads the input
	int counter = 0; 
	istringstream instream(input); 
	string checker; 
	for (int k = 0; k < input.size(); k++)
	{
		//pushes a string of the characters up to a whitespace, then adds a whitespace to the vector tokens
		instream >> checker; 
		tokens.push_back(checker);
		tokens.push_back("");
		counter++;
		k = (k) + checker.size();
	}
	return counter; 
}

//This by no means works perfectly or in every instance as desired. If an input is reasonable, it should work.
//Alternatively, if the input looks like one thing from the first character, specifically an idenfier, this 
//program will struggle and mislable it. Otherwise it should work as desired. 

void AnalyzeTokens(std::vector<std::string>& tokens)
{
	//+2 instead of +1 is to skip the whitespaces we put in on purpose
	for (int ii = 0; ii < tokens.size(); ii = ii + 2) 
	{
		std::vector<string> v = tokens; 
		istringstream instream(tokens[ii]);
		char character = 32;
		string ver; 
		int num = -1000; 
		instream >> character;
		//checks the ascii value of the first character to see if it (probably) an identifier or whitespace
		if (64 < character && character < 91)
			cout << "[Identifier]" << "\t";
		else if (96 < character && character < 123)
			cout << "[Identifier]" << "\t"; 
		else if (character == 32)
			cout << "[Whitespace]" << "\t";
		//+1 to deal with the mismatch between location vs actual size of the string
		else if (character == 34)
		{ 
			instream >> ver;
			size_t found = ver.find("\"") + 1;
				if (found == ver.size())   
					cout << "[String]" << "\t";
				else
					cout << "[Unknown]" << "\t";
		}
		//checks for all elements of the string being integers using the fact that instream num will only pick up 
		//integers to the point that they fail to to be integers, ie if 99i9 is what is read then num should be 99,
		//we use v for vector since instream above already picked out one of the characters up there, and i breaks 
		//continuity so the string version of num disagrees with what is the actual string in location v[ii]
		//Obviously this explanation should not be necessary in good code. 
		else
		{
			istringstream instream(v[ii]);
			instream >> num;
			string verifier = std::to_string(num);
			if (v[ii] == verifier)
				cout << "[Integer]" << "\t";
			else
				cout << "[Unknown]" << "\t";
		} 
		cout << "\"" << tokens[ii] << "\"" << endl;
	}
}