#include "dna_consensus.h"

vector <string> get_dna_consensus(vector<string> dna_strings)
{
	for (int i = 0; i < dna_strings.max_size; i++)
	{
		int a = 0;
		int c = 0;
		int g = 0;
		int t = 0;

		for (int j = 0; j = dna_strings.max_size; j++) // iterates the loop until j is equal to the vectors max size
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
