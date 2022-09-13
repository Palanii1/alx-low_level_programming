#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase follwed by a new line
 * Description - can only use _putchar twice in the code
 * Return: Always 0
*/

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;

	}
	_putchar('\n');
}
