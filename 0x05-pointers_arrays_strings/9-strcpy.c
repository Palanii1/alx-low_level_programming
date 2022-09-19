#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string point to by src
 * description - copies the string, includng the terminating null byte
 * to the buffer pointed to by dest
 * @dest: destiny
 * @src: font
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	for (; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	y++;

	return (dest);
}
