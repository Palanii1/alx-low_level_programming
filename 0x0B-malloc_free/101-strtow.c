#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcmp - former functions
 * @s1: string
 * @s2: string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}

/**
 * _strlen - finds strings length
 * @s: string
 * @i: location
 * Return: lenght of string
 */

int _strlen(char *s, int i)
{
	int count = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * words_count - determines count of words
 * @str: string
 * Return: number of words
 */

int words_count(char *str)
{
	int count = 0, flag = 0;

	while (*str)
	{
		if (*str != ' ')
			flag = 1;
		else if (flag == 1)
		{
			count++;
			flag = 0;
		}
		str++;
	}
	return (count);
}

/**
 * _strcpy - copies elements of 1 string to another
 * @s: string
 * @i: position
 * @tmp: Array
 * Return: new array with elements
 */

char *_strcpy(char *s, int i, char *tmp)
{
	int j;

	for (j = 0; s[i] != ' ' && s[i] != '\0'; i++, j++)
	{
		tmp[j] = s[i];
	}
	tmp[j] = '\0';

	return (tmp);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: Array of words
 */

char **strtow(char *str)
{
	int i = 0, j = 0, pos, t;
	char **tmp;

	if (str == NULL || _strcmp(str, "") || (words_count(str) == 0))
	{
		return (NULL);
	}
	tmp = malloc(sizeof(int *) * (words_count(str) + 1));
	if (tmp == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		if (str[i] != ' ')
		{
			pos = _strlen(str, i);
			tmp[j] = malloc(sizeof(char) * (pos + 1));
			if (tmp[j] == NULL)
			{
				for (t = j; t >= 0; t--)
				{
					free(tmp[t]);
				}
				free(tmp);
				return (NULL);
			}
			_strcpy(str, i, tmp[j]);
			j++;
			i += pos;
		}
		else
		{
			i++;
		}
	}
	tmp[j] = NULL;
	return (tmp);
}

