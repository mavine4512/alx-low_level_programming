#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num[10] = "0123456789";
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(num[n]);
	}
	putchar('\n');
	return (0);
}
