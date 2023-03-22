#include "main.h"

/**
 * positive_or_negative-check for positive or negative
 *
 * @i: the number
 *
 * Return:void
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		print("%d is negative", i);
	}
	else
	{
		print("%d is positive", i);
	}
}
