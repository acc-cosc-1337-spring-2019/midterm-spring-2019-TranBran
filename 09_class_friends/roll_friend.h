#ifndef ROLL_FIREND_H
#define ROLL_FRIEND_H
//Roll class interface 
#include "die.h"
//#include<iostream>
#include<string>
using std::string;

class Roll
{
public:

	Roll(Die & d1, Die & d2) : die1(d1), die2(d2) {}

	void roll();
	std::string result();
	int value1();
	int value2();

	friend int die1_roll_value( Roll & r); //friend function for the die roll function callsroll class and creates an instance of it in r

	friend int die2_roll_value(Roll & r);

private:

	Die& die1;
	Die& die2;
	int die1_roll_value;
	int die2_roll_value;
	bool rolled;

	bool craps();
	bool natural();




};



#endif