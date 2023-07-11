#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: The arguments
 * Return: 0 if successful, otherwise a number between 97 and
 * 100 (each number represents an error)
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		close_fd(to_fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	copy_contents(from_fd, to_fd, argv[1], argv[2]);
	close_fd(from_fd), close_fd(to_fd);
	return (0);
}

/**
 * close_fd - closes a file handle and exits program on failure
 * @fd: The file handle
 */
void  close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}

/**
 * copy_contents - Copies the contents from one file to another
 * @from_fd: The source file handle
 * @to_fd: The destination file handle
 * @src_file: The source file name
 * @dest_file: The destination file name
 */
void copy_contents(int from_fd, int to_fd, char *src_file, char *dest_file)
{
	int i, c, buf_size = 1024;
	void *buf = malloc(sizeof(char) * buf_size);

	if (buf != NULL)
	{
		for (i = 0; ; i += buf_size)
		{
			c = read(from_fd, buf, buf_size);
			if (c == 0)
				break;
			if (c < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
				exit(98);
			}
			if (write(to_fd, buf, c) != c)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
				free(buf);
				exit(99);
			}
		}
		free(buf);
	}
}

