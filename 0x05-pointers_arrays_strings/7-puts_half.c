#include "main.h"

/**
 * _strlen - returns lenght of string
 * @s: character pointer
 * Return: string length
 */

int _strlen(char *s)
{
	int l; int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	l = a;
	return (l);
}

/**
 * puts_half - prints half of a string, followed by new line
 * @str: string pointer
 * Return: halfed string
 */

void puts_half(char *str)
{
	int x;
	int str_size = _strlen(str);

	if (str_size % 2 != 0)
	{
		x = (str_size / 2) + 1;
	}
	else
	{
		x = str_size / 2;
	}
	for (x = x; x < str_size; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
