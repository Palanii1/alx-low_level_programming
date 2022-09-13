#include <stdio.h>

/**
 * main - find and prints the sum of even-valued fibonacci terms
 * Description - values should not exceed 4,000,000
 * Return: 0
 */

int main(void)
{
	int a = 1, b = 2, sum = 0;
	int c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}

		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", sum);
	return (0);
}
