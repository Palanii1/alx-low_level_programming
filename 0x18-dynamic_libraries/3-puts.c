#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * description - prints to stdout
 * @str: character
 * Return: a string
 */

void _puts(char *str)
{
	int a;

	for (a = 0; *(str + a) != '\0'; a++)
	{
		_putchar(*(str + a));
	}
	_putchar('\n');
}
