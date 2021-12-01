/*
writefile.cpp
William Odom Jr. 
Writes information to a file
*/

#include <iostream>
using std::cout; 
using std::endl;

#include <fstream>
using std::ofstream;

#include <iomanip>
using std::setw; 

#include <string>
using std::string; 

int main()
{
	string file = "hello.txt";
	ofstream fout(file);
	if (!fout)
	{
		cout << "Error opening file" << endl;
		return 0;
	}
	else
		cout << "File " << file << " successfully" << endl;
	/*
	for (int i = 0; i < 10; i++)
		fout << "Hello! " << endl; 
	*/
	for (int i = 1; i < 101; i++)
	{
		fout << setw(3) << i << " " ;
		if (i % 10 == 0)
			fout << endl; 
	}
	cout << "File edit complete" << endl;
}
