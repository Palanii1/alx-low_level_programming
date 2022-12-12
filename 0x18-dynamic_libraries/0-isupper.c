#include "main.h"

/**
 * _isupper - returns 1 if alphabet is uppercase, 0 if otherwise
 * @c: character
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
