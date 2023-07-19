#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to generate the times table for
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	for (int i = 0; i <= n; i++)
	{
		printf("0");
		for (int j = 1; j <= n; j++)
		{
			int prod = i * j;
			if (prod <= 9)
				printf(",   %d", prod);
			else if (prod <= 99)
				printf(",  %d", prod);
			else
				printf(", %d", prod);
		}
		printf("\n");
	}
}
