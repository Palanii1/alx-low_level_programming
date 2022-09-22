#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @str: string
 * Return: rot13 encoded string
 */

char *rot13(char *str)
{
	int a;
	int b;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char z[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (str[a] == x[b])
			{
				str[a] = z[b];
				break;
			}
		}
	}
	return (str);
}
