#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: unsigned integer
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l = 0, i = 0;

	unsigned int j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l])
		l += 1;
	p = malloc(l + n + 1);

	if (p == NULL)
		return (NULL);
	while (s1[1])
	{
		p[i] = s1[i];
		i += 1;
	}
	
	while (j < n)
	{
		p[i + j] = s2[j];
		j += 1;
	}
	p[i + j] ='\0';

	return (p);
}