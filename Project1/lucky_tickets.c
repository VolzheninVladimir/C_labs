#include <stdio.h>
#define ALG_SUM_9 55

int main()
{
	float number_of_permutations = 0;
	float total_number = 0;

	for (int i = 0; i <= 3; i++)
	{
		number_of_permutations = ((18 - i) * (i + 1.0) / 2.0) - (i + 1.0) * (i + 2.0) / 2.0 + ALG_SUM_9;
		total_number += 2 * number_of_permutations * number_of_permutations;
		number_of_permutations = ((i + 1.0) * (i + 2.0) / 2.0);
		total_number += 2 * number_of_permutations * number_of_permutations;
	}

	for (int i = 4; i <= 9; i++)
	{
		number_of_permutations = ((i + 1.0) * (i + 2.0) / 2.0);
		total_number += 2 * number_of_permutations * number_of_permutations;
	}

	printf("%f\n", total_number);
	return 0;
}
