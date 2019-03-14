#include "dna_hamming.h"
#include <iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;


int main()
{
	std::string l = "1";
	std::string dna_sequence;
	std::string dna_sequence2;

	while (l == "1") // loop is needed to keep program running until the user wants to quit
	{
		cout << "Input your first Dna sequence: ";
		cin >> dna_sequence;

		
		cout << "Input your second Dna sequence: ";
		cin >> dna_sequence2;

		int get_dna_hamming_distance(std::string dna_sequence, std::string dna_sequence2); // takes input value and plugs them into the function
		cout << "The Dna hamming disatance is : " << get_dna_hamming_distance;


	}
	
	return 0;
;
}
