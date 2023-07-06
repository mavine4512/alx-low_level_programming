#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: The number containing the bit
 * @index: The index of the bit to set
 * Return: 1 if it worked, otherwise, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n1 = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	n1 <<= index;
	*n = *n | n1;
	return (1);
}
