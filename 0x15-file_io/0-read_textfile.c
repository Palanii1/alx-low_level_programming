#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to file
 * @letters: number of letters to read and print
 * Return: number of letters printed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, b, c;
	char *buffer;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);
	if (a < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	b = read(a, buffer, letters);
	if (b < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[b] = '\0';

	close(a);

	c = write(STDOUT_FILENO, buffer, b);

	if (c < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (c);
}
