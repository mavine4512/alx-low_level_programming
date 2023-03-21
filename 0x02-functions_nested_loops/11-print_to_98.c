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
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			_putchar(n);
			_putchar(',');
		}
		else if (n < 98)
		{
			for (; n < 98; n++)
			{
				_putchar(n);
				_putchar(',');
			}
		}
	}
	_putchar(n);
	_putchar('\n');
}
