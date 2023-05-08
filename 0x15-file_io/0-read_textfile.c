#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints
 * it to the POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should
 * read and print
 * Return: If the function fails or filename is NULL - 0.
 * 0/w - the actual number of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, o, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	r = read(0, buffer, letters);
	o = open(filename, O_RDONLY);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
