#include  "main.h"

/**
 * print_alphabet_x10 - prints ten times the alphabet in lowercase follwed by new line
 * Description - can only user `_putchar` twice in the code
 * Return: Always 0
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
