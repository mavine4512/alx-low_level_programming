#include "main.h"
#include <stdio.h>

/**
 * get_bit - get the value of a bit at a give index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
