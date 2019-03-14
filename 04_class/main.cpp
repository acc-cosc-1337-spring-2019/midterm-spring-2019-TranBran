#include "die.h"
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;

//Write include statement
/*
Program runs until user opts out.

For each loop Roll die and display output

*/

int main() 
{
	std::string r;
	string r = "1";
	int roll;

	Die R;

	while (r == "1")
	{

		cout << "press 1 to roll the die or press 2 to quit";
		cin >> roll;

		

		while (roll == 1)
		{
			Die game;

			cout << "You rolled a: " << game.roll;
	
			cout << "Roll again? press 1 to roll again.";
			cin >> roll;

		}

		return 0;


	}

	return 0;
}