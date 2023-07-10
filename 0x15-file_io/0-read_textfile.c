#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the text file
 * @letters: The number of letter it should read and print
 * Return: The actual number of letter it could read and print, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n = 0;
	int fd, a;
	void *buf = malloc(sizeof(char) * 2);

	if (filename == NULL || buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	for (n = 0; n < (ssize_t)letters; n++)
	{
		a = read(fd, buf, 1);
		if (a == 0)
			break;
		a = write(STDOUT_FILENO, buf, 1);
		if (a != 1)
			return (0);
	}
	close(fd);
	free(buf);
	return (n);
}
