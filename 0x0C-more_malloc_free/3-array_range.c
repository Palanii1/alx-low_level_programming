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
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));

	if (p == NULL)
		return (NULL);
	for (i = 0; min + i <= max; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
