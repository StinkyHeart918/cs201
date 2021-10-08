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
using std::string; 
using std::getline; 
using std::istringstream; 

bool ReadLine(std::string& str)
{
	str = "";
	getline(cin,str);
	if (str != "")
		return true;
	else
		return false; 
}

unsigned StringToTokensWS(const std::string& input, std::vector<std::string>& tokens)
{
	int counter = 0; 
	istringstream instream(input);
	string checker; 
	for (int k = 0; k < input.size(); k++)
	{
		instream >> checker;
		tokens.push_back(checker);
		tokens.push_back("");
		counter++;
		k = (k) + checker.size();
	}
	return counter; 
}

void AnalyzeTokens(std::vector<std::string>& tokens)
{

}