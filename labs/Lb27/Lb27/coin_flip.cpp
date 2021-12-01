/*
coin_flip.cpp
William Odom Jr. 
Uses psudorandom number generator to flip a coin
*/

#include <iostream>
using std::cout; 
using std::endl;

#include <random>
using std::random_device;
using std::mt19937; 
using std::uniform_int_distribution;
int main()
{
	int heads = 0; int tails = 0; 
	random_device rd; 
	mt19937 gen(rd()); 
	uniform_int_distribution<int> distrib(0, 1);
	for (int i= 0 ; i < 1000; i++)
	{
		int rand_int = distrib(gen);
		cout << rand_int << " ";
		if (rand_int == 1)
			heads++;
		else
			tails++;
	}
	cout << "Head: " << heads << "Tails: " << tails; 
}