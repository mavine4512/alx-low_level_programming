#include <stdio.h>

/**
 * main - Program that prints its name, then a new line
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
