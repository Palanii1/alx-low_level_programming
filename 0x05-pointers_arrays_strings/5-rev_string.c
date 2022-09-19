#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character
 * Return: reversed string
 */

void rev_string(char *s)
{
	int a = 0;
	int b;
	char x;
	char y;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (b = 0; b < 1; b++)
	{
		x = s[b];
		y = s[a];
		s[b] = y;
		s[a] = x;
		a--;
	}
}
