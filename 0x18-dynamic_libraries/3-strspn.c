#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: chararcter
 * @accept: string
 * Return: number of bytes in initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int z = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				z++;
				break;
			}
		}
		if (accept[b] == '\0')
			return (z);
	}
	return (z);
}
