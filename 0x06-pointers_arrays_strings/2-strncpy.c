#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: integer
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '0')
	{
		if (a < n)
		{
			dest[a] = src[a];
		}
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
