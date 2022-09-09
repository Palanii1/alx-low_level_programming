#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determnine if last difit of random number is
 * greater or less than 5 or 0
 * Return: 0 if sucess
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d", n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	if (n % 10 == 0)
	{
		printf("is 0\n");
	}
	if (n % 10 < 6 && n % 10 != 0)
	{
		printf("less than 6 and not 0\n");
	}
	return (0);

}
