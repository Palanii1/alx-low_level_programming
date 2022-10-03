#include "stdlib.h"
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[a])
		a += 1;
	while (s2[b])
		b += 1;

	p = malloc((a + b) * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);
	while (*s1)
	{
		p[c] = *s1++;
		c += 1;
	}
	while (*s2)
	{
		p[c] = *s2++;
		c += 1;
	}
	return (p);
}
