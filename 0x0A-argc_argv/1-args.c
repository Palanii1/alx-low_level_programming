#include <stdio.h>
#include <stdlib.h>

/**
 * main - beginning
 * @argc: count of array arguments
 * @argv: argument array
 * Return: argc
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
