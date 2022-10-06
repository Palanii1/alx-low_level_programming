#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: NULL If nmemb or size is 0 or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	n = malloc(size * nmemb);
	if (n == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < nmemb * size; a += 1)
	{
		*(n + a) = 0;
	}
	return (n);
}
