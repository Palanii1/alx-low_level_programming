#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - creates an array of integers
 * @min: integer
 * @max: integer
 * Return: NULL if min > max or if malloc fails
 */

int *array_range(int min, int max)
{
	int *p, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i += 1)
	{
		p[i] = min + 1;
	}
	return (p);
}
