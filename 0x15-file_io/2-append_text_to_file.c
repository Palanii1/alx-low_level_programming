#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to create
 * @text_content: null terminated string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, c = 0;

	if (!filename)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);

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
