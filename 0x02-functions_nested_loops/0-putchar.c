#include "main.h"
/**
 * main - prints '_putchar' followed by new line
 * Description - standard libraries ar not allowed
 * Return: 0
*/

int main(void)
{
	char first_example[] = "_putchar";
	int i = 0;

	while (first_example[i] != '\0')
	{
		_putchar(first_example[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
