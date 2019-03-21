//class Craps implementation
#include "craps.h"
#include "shooter.h"
#include "roll.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

/*
std::ostream & operator<<(std::ostream & out, Craps & c)
{

 i cant figure this out :(

} 

*/

std::istream & operator<<(std::istream & in, const Craps & c)
{

	// TODO: insert return statement here
	int shooters;

	cout << "How many people are playing?: ";
	in >> shooters;
	
	for (int i = 0; i < shooters; ++i)
	{
		Shooter s;

		c.shoot.push_back(s);
	}
	return in;


}

void Craps::play_game()
{

	int phase1 = 0; // sets int variables to use later in running the phase loops;
	int phase2 = 0;

	while (phase1 = 0)
	{
		cout << "Shooter roll by pressing 1";
		cin >> phase1;

	}
	
	

	
	while (phase1 == 1 )
	{
		Die die1;
		Die die2;
		int value;
		int point_value;

		Shooter shoot;
		Roll r (die1,die2);
		shoot.shooter(die1,die2);
		shoot.shooter = value;

		cout << "You rolled a : " << value;

		if (value == 2 || value == 3 || value == 12)
		{
			cout << "Craps ";

			phase1 = 1;


		}
		else if (value == 7 || value == 11)
		{

			cout << "Natural" << "you win";


			phase1 = 1;




		}
		else if (value == 4 || value == 5 || value == 6 || value == 8 || value == 9 || value == 10)
		{

			cout << "You got a point of : " << value;
			cout << "Shooter press 1 to roll for point";
			cin >> phase2;



		}

		while (phase2 = 1)
		{
			shoot.shooter = point_value;
			if (point_value = value)
			{
				cout << "Bet Lines Win";;

				phase1 = 0;

			}
			else if (point_value == 7)
			{

				cout << "7-out bets lost";

				phase1 = 0;
			}


		}
	}
	
	
}
