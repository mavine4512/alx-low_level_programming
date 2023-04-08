#include <stdio.h>

/**
 * main - Number of arguments passed into it
 * @argc: arguments counts
 * @argv: arguments arrays
 * Return: Always 0 success
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
