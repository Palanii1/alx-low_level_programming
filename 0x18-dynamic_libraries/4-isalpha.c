#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: int char type
 * Return: 1 if c is a lowe or uppercase letter, 0 if otherwise
*/

int _isalpha(int c)
{

	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
