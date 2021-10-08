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

void AnalyzeTokens(std::vector<std::string>& tokens)
{
	for (int ii = 0; ii < tokens.size(); ii = ii + 2) //+2 is to skip the whitespaces we put in on purpose
	{
		if()
		cout << "[Integer] ";
		if()
		cout << "[Identifier] ";
		if()
		cout << "[String] ";
		if()
		cout << "[Whitespace] ";
		else
			cout << "[Unknown] ";
		cout <<"\t" << "'" << tokens[ii] << "'"; //Should always end the same way...
	}
}