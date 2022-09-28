#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: integer
 */
/**
 * natural_square_root - finds the natural square root of a number
 * @x: integer
 * @y: integer
 * Return: square root or -1 if no natural square root
 */

int natural_square_root(int x, int y)
{
	int a = y * y;

	if (a > x)
	{
		return (-1);
	}
	if (a == y)
	{
		return (y);
	}
	return (natural_square_root(x, y + 1));
}

int _sqrt_recursion(int n)
{
	return (natural_square_root(n, 1));
}
