#include "main.h"

/**
 * rev_string - reverses a string
 * @s: character
 * Return: reversed string
 */

void rev_string(char *s)
{
int i;
int j = 0;
int k = 0;
char d;

while (s[j] != '\0')
{
j++;
}
k = j - 1;
for (i = 0; i < j / 2; i++)
{

d = s[i];
s[i] = s[k];
s[k--] = d;
}
}
