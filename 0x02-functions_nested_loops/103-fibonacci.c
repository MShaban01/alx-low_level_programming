#include <stdio.h>
/**
 * main - Prints the sum of even fibonacci numbers
 * less than 4000000.
 * 
 * Return: Nothing!
 */

int main(void)
{

	int x = 1, y = 2, sum = 0;


	while (x <= 4000000)

	{
		if (x % 2 == 0)
			sum += x;
		int z = x + y;
		x = y;
		y = z;
	}

	printf("%d\n", sum);

	return (0);
}
