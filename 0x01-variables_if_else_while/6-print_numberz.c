#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
