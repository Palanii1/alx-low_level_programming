#include "main.h"

/**
 * is_prime_number - returns 1 if input interger is prime number
 * or 0 if input interger is not prime number
 * @n: integer
 * Return: 1 if prime, 0 if not prime
 */
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

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
	{
		return (0);
	}
	return (prime_number(2, n));
}
