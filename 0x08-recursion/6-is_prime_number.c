#include "main.h"

/**
 * prime_number - finds a prime number
 * @a: integer
 * @b: integer
 * Return: 1 if prime, 0 if not
 */

int prime_number(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (b % a == 0)
	{
		return (0);
	}
	return (prime_number(a + 1, b));
}

/**
 * is_prime_number - returns prime number
 * @n: integer
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
	{
		return (0);
	}
	return (prime_number(2, n));
}
