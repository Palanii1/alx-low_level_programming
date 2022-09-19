#include "main.h"

/**
 * _strlen - returns string length
 * @s: character pointer
 * Return: string length
 */

int _strlen(char *s)
{
	int l;
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	l = a;
	return (l);
}

/**
 * puts2 - prints every other character of a string
 * starting from the first, folowed by new line
 * @str: string pointer
 * Return: printed characters
 */

void puts2(char *str)
{
	int x;
	int req_char = _strlen(str);

	for (x = 0; x < req_char; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
