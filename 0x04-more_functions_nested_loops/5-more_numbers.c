#include "main.h"

/**
 * more_numbers - prints number 0 t0 14 , ten times
 * Return: 0-14, ten times then new line
 */

void more_numbers(void)
{
	int i, z;

	for (i = 0; i < 10; i++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z > 9)
			{
				_putchar((z / 10) + '0');
			}
			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
