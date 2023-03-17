#include <stdio.h>

/**
 * main - Print all posible combination of single-digit numbers
 * using putchar to print data
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
