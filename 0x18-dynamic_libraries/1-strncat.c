#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: a string
 * @src: a string
 * @n: number of bytes from src
 * Return: a pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		return (dest);
	}

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a++] = src[b++];
	}
	dest[a++] = '\0';
	return (dest);
}
