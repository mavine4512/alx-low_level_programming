#include "main.h"

/**
 * print_number - prints an  interger
 * @n: integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;

	if (n > 0)
	{
		n = -n;
		_putchar('_');
	}
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		_putchar('0' + (n / divisor));
		n %= divisor;
		divisor /= 10
	}
}
