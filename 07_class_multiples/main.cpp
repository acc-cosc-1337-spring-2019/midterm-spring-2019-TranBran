#include "shooter.h"
#include<iostream>
#include<vector>

using std::vector;
using std::cout;
/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.

In another loop iterate the vector of Roll and dislplay the Roll result.
*/
int main() 
{
	vector<Roll> R; // vector of roll

	for (int i; i <= 20; ++i) // 20 iteration loop
	{
		Die die1; // 2 instances of the class Die objects
		Die die2;
		Shooter shoot; // instance of Shooter class object
		Roll r = shoot.shooter(die1, die2); // calls roll function and sets it to the shooter

		R.push_back(r); // pushes the data back to the vector R

	}

	for (auto v : R) // loops the vector
	{

		cout << "\n" "Die 1 rolled a: " << v.value1() << "\n" "Die 2 rolled a: " << v.value2() << "\n" "Result: " << v.result();


	}

	return 0;
}
	
