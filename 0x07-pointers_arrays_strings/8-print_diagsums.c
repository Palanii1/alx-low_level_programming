#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: array size
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int x, y;
	int first_sum = 0;
	int second_sum = 0;

	for (x = 0; x < size * size; x += (size + 1))
	{
		first_sum += a[x];
	}
	for (y = size - 1; y < size * size - (size - 1); y += (size - 1))
	{
		second_sum += a[y];
	}
	printf("%d, %d\n", first_sum, second_sum);
}
