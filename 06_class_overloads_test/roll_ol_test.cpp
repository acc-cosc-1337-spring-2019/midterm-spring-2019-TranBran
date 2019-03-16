#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"roll_ol.h"
#include "die.h"
/*
Test the overloaded function to make sure roll's produce a valid result:
Craps
Natural
Point

Create Loop of at least 20 iterations
*/

TEST_CASE("Test Game functionality")
{
	for (int i = 1; i <= 20; ++i)
	{
		Die die1;
		Die die2;
		Roll r(die1, die2);
		r.roll(die1, die2);
		int roll_sum = r.value1() + r.value2();
		if (roll_sum == 2 || roll_sum == 3 || roll_sum == 12)
			REQUIRE(r.result() == "Craps");
		else if (roll_sum == 7 || roll_sum == 11)
			REQUIRE(r.result() == "Natural");
		else
			REQUIRE(r.result() == "Points");
		// Test case runs the code for the craps result and the natural result and checks to make sure the result of the 2 rolled die are 
		//printing correctly and giving the correct answer over the iterated 20 dice throws.
		//essentialy runs the game similiar to the main.cpp and checks result to test.
	}
}