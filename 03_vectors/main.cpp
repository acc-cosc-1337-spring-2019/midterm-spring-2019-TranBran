#include "dna_consensus.h"
#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;

int main() 
{

	string data;
	int input = 1;
	while (input = 1)
	{

		cout << "Please input your Dna Sequence (All caps please): ";
		cin >> data;

		dna_strings.push_back(data);

		cout << "Add another Dna sequence? press 1";
		cin >> input;

	}
	
	cout << "Consensus: " << get_dna_consensus;
}