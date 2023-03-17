#include <stdio.h>

/**
 * main - print  all number base 16 in lowercase
 *
 * Return: Alwas 0 (Success)
 */
int main(void)
{
	int x;
	char b;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
