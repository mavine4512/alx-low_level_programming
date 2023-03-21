#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: number
 *
 * Return: Void
 */
void print_to_98(int n)
{
	int i;

	for ( i = n; i <= 98; i++)
	{
		_putchar(i);
		if (i != 98)
		{
			_putchar(',');
		}
		else
		{
			_putchar('\n');
		}
	}
}
