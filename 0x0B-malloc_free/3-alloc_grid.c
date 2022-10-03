#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * **alloc_grid - returns pointer to 2 dimensional array of integers
 * @width: int array
 * @height: int array
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **s;

	if (width <= 0 || height <= 0)
		return NULL;
	s = malloc(sizeof(int *) * height);

	if (s == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		s[a] = malloc(sizeof(int) * width);

		if (s[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
			{
				free(s[a]);
			}
			free(s);
			return (NULL);
		}
	}
	for (a = 0; b < width; b++)
		s[a][b] = 0;
	return (s);
}
