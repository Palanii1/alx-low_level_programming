#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of characters
 * array is initialized with a specific character
 * @size: integer
 * @c: chararter
 * Return: a pointer to the array, NULL if size is 0 or fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);

	if (p == 0)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		p[a] = c;
	}
	return (p);
}
