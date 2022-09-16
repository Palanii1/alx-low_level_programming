#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer 
 * Return: Always 0
 */

void print_number(int n)
{
	if (n >= 0 || n <= 0)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
}
