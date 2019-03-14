//write include statement
#include "fibonacci.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main() 
{
	string f = "1";

	while (f == "1")
	{
		int t1 = 0, t2 = 1, nextTerm = 0, n;

		cout << "Enter a positive number: ";
		cin >> n;

		get_fibonacci(n);

		

		cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
		nextTerm = t1 + t2;

		cout<<get_fibonacci;
	
	}

	
	return 0;
}