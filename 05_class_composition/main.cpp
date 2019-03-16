/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll function, 
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/
#include "roll.h"
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() 
{
	vector<Roll> R; // vector of roll

	for (int i; i <= 20; ++i) // 20 iteration loop
	{
		Die die1; // 2 instances of the class Die objects
		Die die2;
		Roll r(die1,die2); // instance of Roll class object
		r.roll(); // calls roll function

		cout << "\n" "Die 1 rolled a: " << r.value1()<< "\n" "Die 2 rolled a: " << r.value2() <<"\n" "Result: " << r.result();
		// takes rolled values outputs them to the user and stores the value

		R.push_back(r); // pushes the data back to the vector

	}

	for (auto v : R) // loops the vector
	{

		cout << "\n" "Die 1 rolled a: " << v.value1() << "\n" "Die 2 rolled a: " << v.value2() << "\n" "Result: " << v.result();


	}
	
	return 0;
}