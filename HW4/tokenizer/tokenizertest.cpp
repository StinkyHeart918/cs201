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
	int counter = 0; 
	istringstream instream(input); //Reads the input
	string checker; 
	for (int k = 0; k < input.size(); k++)
	{
		instream >> checker; //pushes a string until the whitespace to the checker string
		tokens.push_back(checker);
		tokens.push_back("");
		counter++;
		k = (k) + checker.size();
	}
	return counter; 
}

//This by no means works perfectly or in every instance as desired. If an input is reasonable, it should work.
//Alternatively, if the input is garbage or its first character looks like one thing then it'll

void AnalyzeTokens(std::vector<std::string>& tokens)
{
	for (int ii = 0; ii < tokens.size(); ii = ii + 2) //+2 instead of +1 is to skip the whitespaces we put in on purpose
	{
		std::vector<string> v = tokens; 
		istringstream instream(tokens[ii]);
		char character = 32;
		int num = -1000; 
		instream >> character;
		if (64 < character && character < 91)
			cout << "[Identifier]" << "\t";
		else if (96 < character && character < 123)
			cout << "[Identifier]" << "\t"; 
		else if(character == 34)
			cout << "[String]" << "\t";
		else if(character == 32)
			cout << "[Whitespace]" << "\t";
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