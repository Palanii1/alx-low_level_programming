#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: count of array argument
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;
	int prod = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (x = 1; x < argc; x++)
	{
		prod *= atoi(argv[x]);
	}
	printf("%d\n", prod);
	return (0);
}
