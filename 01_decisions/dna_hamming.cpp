#include "dna_hamming.h"
#include <string>
#include <iostream>
using std::string;
/*
Write code for value-return function get_dna_hamming_distance with two const string
reference parameters that returns an int.

Problem
Figure 2. The Hamming distance between these two strings is 7. Mismatched symbols are 
colored red. Given two strings s and t of equal length, the Hamming distance between
s and t, denoted dH(s,t), is the number ofcorresponding symbols that differ in s and t.

Sample for function call 
int distance = get_dna_hamming_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");

distance will be 7

*/


int get_dna_hamming_distance(std::string s , std::string t)
{
	int distance = 0;
	for (int i = 0; i <= s.length(); ++i) // The loop will run as long as i is less than or qual to the length of string s
	if (s [i] != t[i]) // If the value of string s does not equal the string of string t then add a value to the integer distance.
	{
		++distance; // add value to int distance every time the if statement runs true.


	}
	return (distance); // when the loop no longer meets its requirements and stops running return the distance value
}
