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

	for (x = 0; x < 10; x++)
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
