#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: integer
 * @b: integer
 * Return: integer sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: integer
 * @b: integer
 * Return: integer subtratct
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: integer
 * @b: integer
 * Return: integer product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: integer
 * @b: integer
 * Return: integer dividend
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus function
 * @a: integer
 * @b: integer
 * Return: modulus result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
