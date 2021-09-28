/*
boxer.hpp
William Odom Jr. 
9/27/2021
Hold functions for boxerprint.cpp
*/

#ifndef FILE_BOXER_HPP_INCLUDED
#define FILE_BOXER_HPP_INCLUDED

// getInt
// Get an integer from a typed line of text; repeat until successful.
// Does no error checking on cin, so avoid using for file input.
//
// Sample usage:
//   cout << "Type your favorite number: ";
//   int favnum = getInt();
//

int inputInfo(int size, std::string& phrase);


void box(int size, std::string& phrase);
#endif 
#pragma once