#include "stdlib.h"
#include "main.h"

/**
 * word_count - count words in a string
 * @str: string
 * Return: count
 */

int word_count(char *str)
{
	int count = 0, flag = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
	}
	return (count);
}

/**
 * strtow - splits string into words
 * @str: string
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	char **matrix, *tmp;

	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;

				tmp = (char *) malloc(sizeof(char) * (c + 1));

				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';

				matrix[k] = tmp - c;

				k++;

				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;

	return (matrix);
}

