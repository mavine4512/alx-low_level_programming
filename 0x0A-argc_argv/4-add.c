#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers
 * @argc: argument counts
 * @argv: Array of arguments
 * Return: Always 0 Success
 */
int main(int argc, char **argv)
{
	int x, i, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		i = strtol(argv[x], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
