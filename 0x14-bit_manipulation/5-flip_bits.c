#include "main.h"

/**
 * flip_bits - Gets the number of bits you would need to flip to
 * get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits that Needs to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n > 0 || m > 0)
	{
		if (!(((n & 1) && (m & 1)) || (!(n & 1) && !(m & 1))))
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
