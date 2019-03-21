#ifndef CRAPS_H
#define CRAPS_H
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

class Craps :
{
public:

	void play_game(); // play game function

	//friend std::ostream & operator<<(std::ostream & out, Craps & c);  // overloading ostream and istream operator functions

	friend std::istream & operator << (std::istream & in, Craps & c);









private:


	vector<shooter> shoot; // vectors of shooter and vector of roll
	vector<roll> roll;







}

















#endif CRAPS_H