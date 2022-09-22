#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer
 * Return: output
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
