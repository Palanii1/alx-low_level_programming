#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: int type number
 * Return: value of the last digit
*/

int print_last_digit(int n)
{
	int ldn;

	if (n < 0)
	{
		ldn = -1 * (n % 10);
		_putchar(ldn + '0');
		return (ldn);
	}
	else
	{
		ldn = n % 10;
		_putchar(ldn + '0');
		return (ldn);
	}
}
