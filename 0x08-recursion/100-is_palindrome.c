#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: stringh] length
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		a = _strlen_recursion(s + 1);
		a++;
	}
	return (a);
}

/**
 * _scan - scan string
 * @c: character
 * @d: character
 * Return: character
 */

int _scan(char *c, char *d)
{
	if (*c != *d)
		return (0);
	else if (c >= d)
		return (1);
	else
		return (_scan(c + 1, d - 1));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int a = _strlen_recursion(s);
	char *c = s;
	char *d = s + (a - 1);

	if (a == 0)
	{
		return (1);
	}
	return (_scan(c, d));
}
