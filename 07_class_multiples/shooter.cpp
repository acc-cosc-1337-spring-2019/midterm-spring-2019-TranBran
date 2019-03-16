#include "shooter.h"
// !SHOOTER_H
//class Shooter implementation

Roll Shooter::shooter(Die & d1, Die & d2)
{
	Roll r(d1, d2); // calls the Roll class and roll parameters of die 1 and die 2
	r.roll(); // executes the roll function

	return r; //returns the value
}
