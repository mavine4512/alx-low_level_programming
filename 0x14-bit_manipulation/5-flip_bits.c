#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	int counter =  0;

	for (; diff > 0; diff >>= 1)
	{
		if (diff & 1)
			counter++;
	}

	return (counter);
}
