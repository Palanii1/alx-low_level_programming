#include "main.h"

/**
 * print_number - prints an integer
 * @n: variable
 * Return: Always 0
 */

void print_number(int n)
{
	int m, b;
	unsigned int z;

	b = 10;

	if (n < 10 && n >= 0)
	{
		_putchar(n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}
		z = n;
	while (z / b > 9)
	{
		m = z / b;
		z = z % b;
		_putchar(m + '0');
		b = b / 10;
	}
	}
}
