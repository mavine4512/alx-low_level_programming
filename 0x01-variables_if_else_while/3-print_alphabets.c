#include <stdio.h>

/**
 *main - print the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low[26] = "abcdefghijklmnopqrstuvwxyz";
	char upp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(low[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(upp[i]);
	}
	putchar('\n');
	return (0);
}
