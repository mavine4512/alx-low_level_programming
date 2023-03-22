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
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
