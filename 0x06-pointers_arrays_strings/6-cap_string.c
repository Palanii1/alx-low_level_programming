#include "main.h"

/**
 * *cap_string - capitalizes all words in a string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	int x = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[x] != '\0')
	{
		if ((str[x - 1] == ' ' || str[x - 1] == '\t'
			|| str[x - 1] == '\n' || str[x - 1] == ',' || str[x - 1] == ';'
			|| str[x - 1] == '.' || str[x - 1] == '!' || str[x - 1] == '?'
			|| str[x - 1] == '"' || str[x - 1] == '(' || str[x - 1] == ')'
			|| str[x - 1] == '{' || str[x - 1] == '}')
				&& (str[x] >= 'a' && str[x] <= 'z'))
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
