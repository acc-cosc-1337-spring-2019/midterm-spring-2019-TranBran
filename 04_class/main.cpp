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
	std::string r = "1";
	int play;

	Die R;



		cout << "press 1 to roll the die or press 2 to quit";
		cin >> play;

		while (play == 1)
		{
			Die roll();

			cout << "You rolled a: " << R.rolled_value();
	
			cout << "Roll again? press 1 to roll again.";
			cin >> play;

		}

		return 0;
}