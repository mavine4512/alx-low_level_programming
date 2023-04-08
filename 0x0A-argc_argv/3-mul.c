#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: argumet counts
 * @argv: Array of arguments
 * Return: 0 for success 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, x;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	x = atoi(argv[2]);
	printf("%d\n", i * x);
	return (0);
}
