#include <stdio.h>

/**
 *main - print the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(low[i]);
	}
	putchar('\n');
	return (0);
}
