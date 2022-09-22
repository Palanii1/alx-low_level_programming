#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string
 * Return: string
 */

char *leet(char *str)
{
	int a;
	int b;

	char z[] = "a4e3o0t7l1";

	a = 0;
	b = 0;

	while (str[a] != '\0')
	{
		for (b = 0; b < 10; b += 2)
		{
			if (str[a] == z[b] || str[a] == z[b] - 32)
			{
				str[a] = z[b + 1];
				break;
			}
		}
		a++;
	}
	return (str);
}
