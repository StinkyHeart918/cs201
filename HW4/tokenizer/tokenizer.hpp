#pragma once
/*
tokenizertest.cpp
William Odom Jr.
10/6/2021

*/

#ifndef TOKENIZER_HPP
#define TOKENIZER_HPP

#include <iostream>
#include <vector>
#include <string>
#include "tokenizer.hpp"

//use std::getline to get input text from the user. Return true if it read the string, 
//false if it's blank
bool ReadLine(std::string& str);

//uses std::istringstream to read strings separated by whitespace. Push a blank string 
//at the end of each line.
unsigned StringToTokensWS(const std::string& input, std::vector<std::string>& tokens);

//Determine what token type the given token is
//Integer literal (all the characters present are numbers)
//Identifier literal (starts with a letter of underscore character and followed by 
//A-Z, a-z, 0-9, or _)
//String literal(starts and ends with a double quote
//Whitespace literal (Blank string)
//Unknown (undetermined from the input)
void AnalyzeTokens(std::vector<std::string>& tokens);
#endif