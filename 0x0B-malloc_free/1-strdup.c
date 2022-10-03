#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a new string which is a duplicate
 * to old string str
 * @str: string
 * Return: a pointer, or NULL
 */

char *_strdup(char *str)
{
	int a = 0, b = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a])
		a += 1;
	s = malloc(a * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);
	while (*str)
	{
		s[b] = *str;
		str++;
		b += 1;
	}
	s[b] = *str;
	return (s);
}


