/*
tokenizer.cpp
William Odom Jr.
10/6/2021

*/

#include <iostream>
#include <vector>
#include <string>
#include "tokenizer.hpp"

using std::cout;
using std::endl;
using std::string; 
using std::vector;

int main()
{
	string str; 
	int i = 0; 
	vector<string> tokens; 
	cout << "Please enter some text. Once you finish, type 'end', 'END', or 'End' to stop the program: " << endl;
	while (i < 1)
	{
		if (ReadLine(str))
			StringToTokensWS(str, tokens);
		else
		{
			tokens.push_back(str); //NOTE THAT IN THE ELSE CASE THIS SHOULD BE BLANK ANYWAY
			tokens.push_back("");
		}
		if (str == "end")
			i = 1; 
		if (str == "END")
			i = 1;
		if (str == "End")
			i = 1;
	}
	for (int j = 0; j < tokens.size(); j++)
	{
		cout << tokens[j] << endl;
	}
	//AnalyzeTokens(tokens);
}