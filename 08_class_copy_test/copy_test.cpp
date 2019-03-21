#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
//Create a test case that shows that a copy of Die are not the same
//objects in memory

TEST_CASE("Testing Copy vs. Instance")
{
	Die die;
	die.roll();
	int die_roll1 = die.rolled_value();
	Die die_copy = die;
	Die & d = die;

	REQUIRE(die_roll1 == die_copy.rolled_value());

	REQUIRE(die_roll1 == d.rolled_value());

	die.roll();
	int die_roll2 = die.rolled_value();

	REQUIRE(die_roll2 == die_copy.rolled_value());

	REQUIRE(die_roll2 == d.rolled_value());







}