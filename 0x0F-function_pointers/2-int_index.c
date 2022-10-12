#include "function_pointers.h"

/**
 * int_index - seacrhes for an integer
 * @array: array pointer
 * @size: array size
 * @cmp: function pointer
 * Return: index of first element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
