#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, num_count = 0;
	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			num_count++;
		}
		else if (num_count)
			_putchar('0');
	}
	if (!num_count)
		_putchar('0');
}
