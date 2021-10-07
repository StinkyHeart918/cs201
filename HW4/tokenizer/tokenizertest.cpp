/*
tokenizertest.cpp
William Odom Jr.
10/6/2021

*/

#include <iostream>
#include <vector>
#include <string>
#include "tokenizer.hpp"

using std::cin; 
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
	return 0; 
}

void AnalyzeTokens(std::vector<std::string>& tokens)
{

}