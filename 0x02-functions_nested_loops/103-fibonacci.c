#include <stdio.h>

/**
 * main - Prints the sum of even fibonacci numbers
 * less than 4000000
 *
 * Return: 0
 */
int main(void)
{
	int limit = 4000000;
	int term1 = 1;
	int term2 = 2;
	int next = term1 + term2;
	int sum = 2;

	while (next <= limit)
	{
		if (next % 2 == 0)
			sum = sum + next;
		term1 = term2;
		term2 = next;
		next = term1 + term2;
	}

	printf("%d\n", sum);

	return (0);
}
