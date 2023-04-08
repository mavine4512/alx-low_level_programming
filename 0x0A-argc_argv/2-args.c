#include <stdio.h>

/**
 * main - Program that prints all arguments it receives.
 * @argc: arguments count
 * @argv: Arrays of arguments
 * Return: Alway 0 Success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
