#include <stdio.h>

/**
 * main - beginning
 * @argc: count of array arguments
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
