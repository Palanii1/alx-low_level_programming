#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int unint_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		unint_val = 2 * unint_val + (b[i] - '0');
	}

	return (unint_val);
}
