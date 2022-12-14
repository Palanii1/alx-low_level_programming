#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - entry
 * @argc: count of array argument
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int sum = 0;

	for (a = 1; a < argc; a++)
	{
		if (argv[a][0] == '-')
		{
			for (b = 1; argv[a][b] != '\0'; b++)
			{
				if (isdigit(argv[a][b]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		else
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (isdigit(argv[a][b]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
