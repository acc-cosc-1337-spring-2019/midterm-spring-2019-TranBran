#include "dna_consensus.h"
#include <iostream>

vector <string> get_dna_consensus(vector<string> dna_strings)
{
		int a = 0;
		int c = 0;
		int g = 0;
		int t = 0;

	for (int i = 0; i < dna_strings.size; i++)
	{
		

		for (int j = 0; j = dna_strings.size; j++) // iterates the loop until j is equal to the vectors size
		{
			if (dna_strings[j][i] == 'A') // If the dna string in the vector has an A value add to the a integer
			{
				a++;
			}
			else if (dna_strings[j][i] == 'C')
			{
				c++;
			}
			else if (dna_strings[j][i] == 'G')
			{
				g++;
			}
			else if (dna_strings[j][i] == 'T')
			{
				t++;
			}
		}


		if (a > c||a > g||a > t)
		{

			consensus.push_back("A");



		}

		else if (c > a || c > g || c > t)
		{

			consensus.push_back("C");



		}
		else if (g > a || g > c || g > t)
		{

			consensus.push_back("G");



		}

		else if (t > a || t > c || t > g)
		{

			consensus.push_back("T");



		}


	}


	return (consensus);


}
