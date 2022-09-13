#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - computes and prints the sum of multiples of 3 and 5 < 1024
 * Return: 0
*/

int main(void)
{
	int n = 1;
	int sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0)
		{
			sum += n;
		}
		else if (n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%d\n", sum);

	return (0);
}
