#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll.h"
//write include statement for roll header


/*
Write a test case to assert that retrieving the result from a roll before
calling the roll function returns the string:

Must roll first!
*/
TEST_CASE("Testing roll")
{
	Die die1; //takes the 2 die objects but does not roll them in order to recieve the prompt to roll first.
	Die die2;
	Roll r(die1, die2);

	REQUIRE(r.result() == "Must roll first!");
}





/*
Write a test case to assert that every dice roll returns a valid result:
Craps
Natural
Point

(Loop at least 20 times and create an assert in the loop.)
*/

TEST_CASE("Test Game Functionality")
{
	for (int i = 1; i <= 20; ++i)
	{
		Die die1;
		Die die2;
		Roll r(die1, die2);
		r.roll();
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