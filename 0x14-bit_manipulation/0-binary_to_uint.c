#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converting binary number to an unsigned int
 * @b: charactor
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) + (*b++ - '0');
	}

	return (result);
}
