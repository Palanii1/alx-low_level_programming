#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: pointer to string
 * @size: total number of bytes
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int i;
	int j;

	i = 0;
	if (size <= 0)
	{
		printf("\n");
	}

	while (i < size)
	{
		printf("%8.8x:", i);
		j = 0;

		while (j < 10)
		{
			printf("%02x", b[i + j]);
			if  ((j % 2 == 0 && j != 0) || ((i + j) > (size - 1)))
			{
				printf(" ");
			}
			j++;
		}
		i += 10;
		printf("\n");
	}
}
