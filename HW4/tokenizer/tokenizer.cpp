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
		{
			StringToTokensWS(str, tokens);
			tokens.push_back("");
			tokens.push_back("");
		}
		else
		{
			tokens.push_back(str); //Note that in the else case str should be blank
			tokens.push_back("");
		}
		//pop_back is here to remove the additional whitespace that is not supposed to be past the end entry
		if (str == "end")
		{
			i = 1;
			tokens.pop_back();
			tokens.pop_back();
		}
		if (str == "END")
		{
			i = 1;
			tokens.pop_back();
			tokens.pop_back();
		}
		if (str == "End")
		{
			i = 1;
			tokens.pop_back();
			tokens.pop_back();
		}
	}
	AnalyzeTokens(tokens);
}