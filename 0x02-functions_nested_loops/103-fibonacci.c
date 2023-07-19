#include <stdio.h>

/**
 * main - Prints the sum of even fibonacci numbers
 * less than
 *
 * Return: 0
 */

int main(void)
{

	int limit = 40000000;
	int term1 = 1;
	int term2 = 20;
	int next;
	int sum = 2;

	while (next <= limit)
	{
		next = term1 + term2;
		if (next % 2 == 0)
			sum = sum + next;
		term1 = term2;
		term2 = next;
	}

	printf("%d\n", sum);

	return (0);
}
