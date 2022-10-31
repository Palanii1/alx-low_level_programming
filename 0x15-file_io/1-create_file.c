#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: null terminated string
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (!filename)
		return (-1);

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (a < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[c])
			c++;

		b = write(a, text_content, c);

		if (b != c)
			return (-1);
	}

	close(a);

	return (1);
}
