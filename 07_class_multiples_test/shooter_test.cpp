#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"shooter.h"
#include"die.h"
/*
Test that shooter returns a Roll and verify that the roll result has one 
of the following values:
Natural
Craps
Point

*/

TEST_CASE("Test Game Functionality")
{
	for (int i = 1; i <= 20; ++i)
	{
		Die die1;
		Die die2;
		Shooter shoot;
		Roll s = shoot.shooter(die1, die2);

		int roll_sum = s.value1() + s.value2();
		if (roll_sum == 2 || roll_sum == 3 || roll_sum == 12)
			REQUIRE(s.result() == "Craps");
		else if (roll_sum == 7 || roll_sum == 11)
			REQUIRE(s.result() == "Natural");
		else
			REQUIRE(s.result() == "Points");
		// Test case runs the code for the craps result and the natural result and checks to make sure the result of the 2 rolled die are 
		//printing correctly and giving the correct answer over the iterated 20 dice throws.
		//essentialy runs the game similiar to the main.cpp and checks result to test.
	}
}