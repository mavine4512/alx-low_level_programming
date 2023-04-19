#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its own opcodes
 * @argc: the number of params
 * @argv: the params in the case number of bytes
 * Return: 0 in success
 */
int main(int argc, char *argv[])
{
	int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < bytes - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
