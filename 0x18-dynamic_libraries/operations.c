#include <stdio.h>

/**
 * mainmul - performs multiplication functions
 * @a: integer
 * @b: integer
 * @mul: multiplication
 * Return: 0
 */

int mainmul()
{
	int a = 7;
	int b = 4;
	int mul;
	mul = a * b;
	printf("%i", mul);
	return (0);
}

/**
 * mainadd - performs addtion function
 * @a: integer
 * @b: integer
 * @add: addition
 * Return: 0
 */

int mainadd()
{
	int a = 12;
	int b = 7;
	int add;
	add = a + b;
	printf("%i", add);
	return (0);
}

/**
 * mainsub - performs subtraction function
 * @a: integer
 * @b: integer
 * @sub: subtraction
 * Return: 0
 */

int mainsub()
{
	int a = 19;
	int b = 12;
	int sub;
	sub = a - b;
	printf("%i", sub);
	return (0);
}

/**
 * maindiv - performs division function
 * @a: integer
 * @b: integer
 * @div: division
 * Return: 0
 */

int maindiv()
{
	int a = 10;
	int b = 5;
	int div;
	div = a / b;
	printf("%i", div);
	return (0);
}

/**
 * mainmod - does modulus function
 * @a: integer
 * @b: integer
 * @mod: modulus
 * Return: 0
 */

int mainmod()
{
	int a = 6;
	int b = 3;
	int mod;
	mod = a % b;
	printf("%i", mod);
	return (0);
}
