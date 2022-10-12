#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a;
	char *s;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		puts("Error");
		return (2);
	}
	s = (char *)main;

	for (; a > 0; a--, s++)
	{
		printf("%02x", *s & 0xff);
		if (a != 1)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
