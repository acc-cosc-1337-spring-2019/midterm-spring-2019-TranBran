#ifndef CRAPS_H
#define CRAPS_H
#include <iostream>
using std::cout;
using std::cin;

class Craps :
{
public:

	void play_game(); // play game function

	friend std::ostream & operator<<(std::ostream & out, Craps & c);  // overloading ostream and istream operator functions

	friend std::istream & operator << (std::istream & in, Craps & c);









private:


	std::vector<shooter> shooter; // vectors of shooter and vector of roll
	vector<roll> roll;







}

















#endif CRAPS_H