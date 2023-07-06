#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number containing the bit
 * @index: The index of the bit
 * Return: The value of the bit at the given index, otherwise, -1
 * if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	return ((n >> index) & 1);
}
