#include "main.h"

/**
 * print_diagonal - print a diagonal line on terminal
 * @n: number of lines and column
 * Return: none
 */

void print_diagonal(int n)
{
	int i, z;

	for (i = 0; i < n; i++)
	{
		for (z = 0; z <= i; z++)
		{
			if (z != i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
