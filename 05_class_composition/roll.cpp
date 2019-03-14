#include "roll.h"

//roll class implementation



Roll::Roll(Die & d1, Die & d2):
	 die1 (d1), die2(d2)
{
}

void Roll::roll()
{
	Die roll(die1);
	Die roll(die2);
	die1 = die1_roll_value;
	die2 = die2_roll_value;

}

std::string Roll::result()
{
	return std::string();
}

int Roll::value1()
{
	return 0;
}

int Roll::value2()
{
	return 0;
}

bool Roll::craps()
{
	return false;
}

bool Roll::natural()
{
	return false;
}
