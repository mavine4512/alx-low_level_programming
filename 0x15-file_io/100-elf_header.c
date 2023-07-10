#include <elf.h>
#include "main.h"

/**
 * main - Displays the information contained in the ELF header at the 
 * start of an ELF file
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 if successful, otherwise a number between 97 and
 * 100 (each number represents an error)
 */
int main(int argc, char *argv[])
{
	int fd;
	void *header = NULL;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(STDERR_FILENO, "Error: can't read from file\n", 28);
		exit(98);
	}
	if (is_elf_file(fd, &header))
	{
		if (header != NULL)
		{
			print_elf_header(header);
			free(header);
		}
	}
	else
	{
		close_fd(fd);
		write(STDERR_FILENO, "Invalid ELF header\n", 20);
		exit(98);
	}
	close_fd(fd);
	return (0);
}

/**
 * close_fd - Closes a file handle
 * @fd: The file handle to close
 */
void close_fd(int fd)
{
	if (close((fd)) == -1)
	{
		write(STDERR_FILENO, "Error: Can't close file\n", 24);
		exit(98);
	}
}

/**
 * is_elf_file - Checks if a file contains an ELF header
 * @fd: The file headle
 * @header: The pointer to the addres of the ELF header
 *
 * Return: 1 if file contains an ELF header, otherwise 0
 */
char is_elf_file(int fd, void **header)
{
	int c;
	unsigned char buf[4];

	c = read(fd, (void *)buf, 4);
	if (c == 4)
	{
		if (*(buf + 0) == 0x7f 
				&& (*(buf + 1) == 'E')
				&& (*(buf + 2) == 'L')
				&& (*(buf + 3) == 'F'))
		{
			*header = malloc(*(buf + 4) == 2 ? 64 : 52);
			if (*header != NULL)
			{
				lseek(fd, 0,SEEK_SET);
				c = read(fd, *header, (*(buf + 4) == 2 ? 64 : 52));
				if (c == 52 || c == 64)
				{
					return (1);
				}
				else
				{
					free(*haader);
					close_fd(fd);
					write(STDERR_FILENO, "Incomplete ELF header.\n",23);
					exit(98);
				}
			}
			else
			{
				close_fd(fd);
				write(STDERR_FILENO, "Incomplete ELF header.\n",23);
				exit(98);
			}
		}
	}
	return (0);
}

/**
 * print_elf_header - Prints the contents of anelf header
 * @header: The elf header
 */
void print_elf_header(void *header)
{
	int i = 0, title_width = 35, len;
	char *sections[] = {
		"Magic",
		"Class",
		"Data",
		"Version",
		"OS/ABI",
		"ABI Version",
		"Type",
		"Entry point address",
		NULL,
	};

	printf("ELF Header:\n");
	while(*(sections + i) != NULL)
	{
		for (len = 0; *(sections[i] + len) != '\0'; len++)
			;
		printf(" %s%-*c",*(sections + i),
				i == 0 ? 3 + 1 : title_width - len, ':');
		print_section(i, header);
		i++
	}
}








