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
				lseek(fd, 0, SEEK_SET);
				c = read(fd, *header, (*(buf + 4) == 2 ? 64 : 52));
				if (c == 52 || c == 64)
				{
					return (1);
				}
				else
				{
					free(*haader);
					close_fd(fd);
					write(STDERR_FILENO, "Incomplete ELF header.\n", 23);
					exit(98);
				}
			}
			else
			{
				close_fd(fd);
				write(STDERR_FILENO, "Incomplete ELF header.\n", 23);
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
	while (*(sections + i) != NULL)
	{
		for (len = 0; *(sections[i] + len) != '\0'; len++)
			;
		printf(" %s%-*c", *(sections + i),
				i == 0 ? 3 + 1 : title_width - len, ':');
		print_section(i, header);
		i++;
	}
}

/**
 * print_section _ Print the content of a section in the ELF header
 * @id: The id of the section
 * @header: The pointer to the ELF header
 */
void print_section(int id, void *header)
{
	switch (id)
	{
		case 0:
			print_magic(header);
			break;
		case 1:
			print_class(header);
			break;
		case 2:
			print_data(header);
			break;
		case 3:
			print_version(header);
			break;
		case 4:
			print_os_abi(header);
			break;
		case 5:
			print_abi_version(header);
			break;
		case 6:
			print_type(header);
			break;
		case 7:
			print_entry_pt_addr(header);
			break;
		default:
			break;
	}
}

/**
 * print_magic - Prints the MAGIC section in the ELF header
 * @header: The pointer to the ELF header
 */
void print_magic(void *header)
{
	int i;

	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", *((unsigned char *)(header) + i),
				i < EI_NIDENT - 1 ? ' ' : '\n');
}

/**
 * print_class - Print the class section in the ELF header
 * @header: The pointer to the ELF header
 */
void print_class(void *header)
{
	switch (*((unsigned char *)header + 4))
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown %x>\n", *((unsigned char *)header + 4));
			break;
	}
}

/**
 * print_data - Prints the data section in the ELF Header
 * @header: The pointer to the ELF header
 */
void print_data(void *header)
{
	if (*((unsigned char *)header + 0x05) == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (*((unsigned char *)header + 0x05) == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else if (*((unsigned char *)header + 0x05) == ELFDATANONE)
		printf("none\n");
	else
		printf("<unknown %x>\n", *((unsigned char *)header + 0x05));
}

/**
 * print_version - Prints the version section in the ELF header
 * @header: The pointer to the ELF header
 */
void print_version(void *header)
{
	if (*((unsigned char *)header + 6) == EV_CURRENT)
		printf("%d (Current)\n", *((unsigned char *)header + 6));
	else if ((*((unsigned char *)header + 6) < EV_CURRENT)
			&& (*((unsigned char *)header + 6) != EV_NONE))
		printf("%d\n", *((unsigned char *)header + 6));
	else
		printf("%d <unknown>\n", *((unsigned char *)header + 6));
}

/**
 * print_os_abi - Prints the OS/ABI section in the ELF header
 * @header: The pointer to the ELF header
 */
void print_os_abi(void *header)
{
	switch (*((unsigned char *)header + 0x07))
	{
		case ELFOSABI_SYSV:
			printf("%s\n", "UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("%s\n", "UNIX - HP_UX");
			break;
		case ELFOSABI_NETBSD:
			printf("%s\n", "UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("%s\n", "UNIX - GNU");
			break;
		case ELFOSABI_SOLARIS:
			printf("%s\n", "UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("%s\n", "UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("%s\n", "UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("%s\n", "UNIX - TRU64");
			break;
		case ELFOSABI_ARM:
			printf("%s\n", "UNIX - ARM architecture");
			break;
		default:
			printf("<unknown %x>\n", *((unsigned char *)header + 0x07));
			break;
	}
}

/**
 * print_abi_version - Prints the ABI version in the ELF header
 * @header: The pointer to the ELF header
 */
void print_abi_version(void *header)
{
	printf("%d\n", *((unsigned char *)header + 8));
}

/**
 * print_type - Prints the type section in the ELF Header
 * @header: The pointer to the ELF header
 */
void print_type(void *header)
{
	int is_le = *((unsigned char *)header + 0x05) == ELFDATA2LSB;
	unsigned short type = 0;

	type = (*((unsigned char *)header + 0x10 +
				(is_le && ((unsigned short)5 << 8 == 0 ? 0 : 1) ? 0 : 1)));
	type |= (*((unsigned char *)header + 0x10 +
				(is_le && ((unsigned short)5 << 8 == 0 ? 0 : 1) ? 1 : 0)) << 8);
	if (type == ET_NONE)
		printf("NONE (None)\n");
	else if (type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (type == ET_DYN)
		printf("DYN (shared object file)\n");
	else if (type == ET_CORE)
		printf("CORE (Core file)\n");
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS Specific: (%x)\n", type);
	else if (type >= ET_LOPROC)
		printf("Processor Specific: (%x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}

/**
 * print_entry_pt_addr - Prints the entry point address
 * section in the ELF header
 * @header: The pointer to the ELF header
 */
void print_entry_pt_addr(void *header)
{
	int i, j, k = 0, can_print = 0 offset = 0X18;
	int val_len = *((unsigned char *)header + 4) == ELFDATA2LSB ? 4 : 8;
	int is_le = *((unsigned char *)header + 0x05) == ELFDATA2LSB;

	print("0x");
	for (i = 0; i < val_len; i++)
	{
		j = is_le ? val_len - i - 1 : i;
		can_print = *((unsigned char *)header + offset + j) > 0 && !can_print
			? 1 : can_print;
		if (can_print)
		{
			if (k > 0)
				printf("%02x", *((unsigned char *)header + offset + j));
			else
				printf("%x", *((unsigned char *)header + offset + j));
			k++;
		}
	}
	if (!can_print)
		printf(0);
	printf("\n");
}










