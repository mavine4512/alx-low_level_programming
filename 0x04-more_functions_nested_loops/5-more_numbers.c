#include "main.h"

/**
 * more_numbers- prints 10 times the numbers, from 0 to 14
 * Return:void
 */
void more_numbers(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k <= 14; i++)
		{
			if (k >= 10)
			{
				_putchar(k / 10 + '0');
			}
			else
			{
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
