/*
read_average_main.cpp
William Odom Jr.
Program will first read and count the number of times each word occurs within a file. 
Afterwards, the program will calculate the average distance between any given words. 
*/


//Reads the file and confirms that it can close again. 
void read_file()
{

}

//use vector<pair<string, int>> count and vector<pair<string, int>> location
//count: checks if the string word is already in count, if so add to the associated number
//otherwise, which is it's respective int, otherwise add a new entry and give it an int of 1.
// 
//location: every single word, repeat or not, gets added to this vector, and the int is it
//orignal place in the file. 
// 
//Both functions should be prepared within this function, but are defined as part of a class,
//or are universal variables. Either works here
void classify_words()
{


}

//Counts up the number of times a word appears in the file. 
//Uses an increasingly large struct, which has string for the word,
//second part for the number of times it has been found, and  
void count_words()
{

}

//Look at the file and pick out the average distance between a CHOSEN pair of words, 
//chosen by the user. Read the locations where each word has been found (possibly from
//another part of a struct) and take the average of distance between each. 
void average_words()
{

}

//STEPS: 
//1) Open the file, throw error otherwise
//2) Establish either a pair or struct or class which holds information on:
//	 string of the word, number of occurrances, location within the file of occurances 
//	 This could require two seperate things, ie a pair for the first bit and another 
//	 pair holding all words and locations represented by its location. 
//3) Output the number of occurrances for each word in a readable format
//4) Ask user for two words to compare
//5) Find distance between each location where word1 and word2 exist. 
//6) Output the average of these distances, and repeat 4 until user inputs something to end

int main()
{

}