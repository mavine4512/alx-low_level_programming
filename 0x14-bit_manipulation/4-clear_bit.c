#include "main.h"

/**
 * clear_bit - Sets the value of a bit to o at a given index
 * @n: The pointer to the number containing the bit
 * @index: The index of the bit to set
 * Return: 1 if it worked, otherwise, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n1 = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	n1 <<= index;
	if ((*n >> index) & 1)
		*n = *n ^ n1;
	return (1);
}
