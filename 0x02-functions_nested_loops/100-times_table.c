#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: integer to determine range of times table from 0 to n
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j == 0)
			{
				printf("%d", product);
			}
			else
			{
				printf(", ");

				if (product < 10)
					printf("  ");
				else if (product < 100)
					printf(" ");

				printf("%d", product);
			}
		}

		printf("\n");
	}
}
