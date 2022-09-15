#include "main.h"

/**
 * _isdigit - Returns 1 if c is a digit
 * @c: takes in a character
 * Return: 1 for digit, 1 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
