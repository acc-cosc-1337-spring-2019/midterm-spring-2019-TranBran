#include "fibonacci.h"
#include "iostream"
#include<string>
using std::cout;
using std::cin;
using std::string;
/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/

std::string get_fibonacci(int n )
{

	int t1 = 0, t2 = 1, nextTerm = 0;
	while (nextTerm <= n)
	{
		cout << nextTerm << ", ";
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return 0;

}
