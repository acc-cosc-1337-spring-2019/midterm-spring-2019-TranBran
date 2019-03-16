/*
Create a Die instance and copy to another Die variable. 
Explain what happens with comments in your code.
Create a reference to a Die, explain what happens with comments in your code.  
Create test cases in 08_class_copy_test.
*/
#include "die.h"

int main() 
{
	Die die; // instance of die
	Die die_copy = die; // copy of die
	// When you creat a copy of die. It simply creates a copy and putrs it into  a new variable
	// Since it is a completely new variable whatever thing that may effect the copy will have no effect
	// on the original. The original will remain unscsathed.

	Die & d = die; // A reference to Die through the name d
	// the purpose of using a reference is that it refers to
	// the original copy of the function with a different name 
	// and allows you to read or edit data of the original.

	return 0;
}