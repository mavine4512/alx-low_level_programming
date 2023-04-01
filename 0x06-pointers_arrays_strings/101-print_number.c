#include "main.h"

/**
 * print_number -a function that prints an  interger
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	} else
	{
		x = n;
	}

	if (x / 10)
		print_number(x / 10);

	_putchar((x % 10) + '0');
}
