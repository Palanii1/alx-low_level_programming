#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: number
 */

int _atoi(char *s)
{
	int a, b, c;

	c = 1;
	b = a = 0;

	while ((s[b] < '0' || s[b] > '9') && s[b] != 0)
	{
		if (s[b] == '-')
		{
			c = c * -1;
		}
		b++;
	}
	while ((s[b] >= '0' && s[b] <= '9') && s[b] != 0)
	{
		if (a >= 0)
		{
			a = a * 10 - (s[b] - '0');
			b++;
		}
		else
		{
			a = a * 10 - (s[b] - '0');
			b++;
		}
	}
	c = c * -1;
	return (a * c);
}
