#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//write include statement for dna header
#include "dna_hamming.h"
#include <string>

TEST_CASE("Test configuration setup") 
{
	REQUIRE(true == true);
}

/*

*/

TEST_CASE("test Dna hamming")
{
	std::string dna_sequence = "GAGCCTACTAACGGGAT";
	std::string dna_sequence2 = "CATCGTAATGACGGCCT";

	REQUIRE(get_dna_hamming_distance(dna_sequence, dna_sequence2) == 7);



}
