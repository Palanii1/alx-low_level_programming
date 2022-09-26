#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: pointer to beginning of the located,
 * or NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (c = a, b = 0; needle[b] != '\0'; b++, c++)
		{
			if (needle[b] != haystack[c] || haystack[c] != '\0')
			{
				break;
			}
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
	}
	return (0);
}
