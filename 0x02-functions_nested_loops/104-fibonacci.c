#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description - find and print first 98 fibonacci including 1 and 2
 * Numbers should be seperated by comma and space
 * Return: 0
 */

int main(void)
{
	unsigned long int fb1 = 0, st1 = 1, fb2 = 0, st2 = 2;
	unsigned long int case1, case2, case3;
	int count;

	printf("%lu, %lu, ", st1, st2);
	for (count = 2; count < 98; count++)
	{
		if (st1 + st2 > LARGEST || fb2 > 0 || fb1 > 0)
		{
			case1  = (st1 + st2) / LARGEST;
			case2 = (st1 + st2) % LARGEST;
			case3 = fb1 + fb2 + case1;
			fb1 = fb2, fb2 = case3;
			st1 = st2, st2 = case2;
			printf("%lu%010lu", fb2, st2);
		}
		else
		{
			case2 = st1 + st2;
			st1 = st2, st2 = case2;
			printf("%lu", st2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}


