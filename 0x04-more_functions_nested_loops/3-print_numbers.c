#include "main.h"

/**
 * prints_numbers - prints numbers 0-9
 * Return: print the alphabet in lowercase to stdout, then new line
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		_putchar('\n');
	}
}
