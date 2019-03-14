#include "roll.h"

//roll class implementation
#include <iostream>



Roll::Roll(Die & d1, Die & d2):
	 die1 (d1), die2(d2)
{
}

void Roll::roll()
{
	die1.roll(); // Rolls the 1st and 2nd instance of die
	die2.roll();
	die1_roll_value = die1.rolled_value(); // Takes the die rolled value and inputs it into the die roll value int
	die2_roll_value = die2.rolled_value();

}

std::string Roll::result()
{
	if (natural()) // if the result of the roll comes back as a natural roll print natural
	{
		//cout << "Natural";
		return "natural";
	}
	else if (craps()) // if the roll comes back craps print craps
	{

		//cout << "Craps";
		return "Craps";
	}
	else
		//cout << "points";
	return "points";

}

int Roll::value1()
{

	return die1_roll_value;
}

int Roll::value2()
{
	return die2_roll_value;
}

bool Roll::craps()
{
	int roll_sum = die1_roll_value + die2_roll_value; // Takes sum of both rolled values
	if (roll_sum == 2 || roll_sum == 3 || roll_sum == 12) // checks if the sum equals 2 , 3, or 12
	{
		return true;

	}
	return false;
}

bool Roll::natural()
{
	int roll_sum = die1_roll_value + die2_roll_value; // Takes sum of both rolled values
	if (roll_sum == 7 || roll_sum == 11) // checks if the sum equals 2 , 3 or ,12
	{
		return true;

	}
	return false;
}
