#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: The string representation of the binary number
 * Return: the unsigned int representation of the binary number, otherwise,
 * 0 if b is Null or the string is invalid (all charcters arent 1 or 0)
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (len = 0; *(b + len) != '\0'; len++)
	{
		if (!(b[len] == '0' || b[len] == '1'))
			return (0);
	}

	for (i = 0; *(b + i) != '\0'; i++)
		num += ((*(b + i) - '0') * (1 << (len - i - 1)));

	return (num);
}
