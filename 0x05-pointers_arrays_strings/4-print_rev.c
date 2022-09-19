#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: character
 * Return: Reversed string
 */

void print_rev(char *s)
{
	int a;
	char k;

	for (a = 0; s[a] != 0; a++)
	{
	}
	for (a = a - 1; a >= 0; a--)
	{
		k = s[a];
		_putchar(k);
	}
	_putchar('\n');
}
