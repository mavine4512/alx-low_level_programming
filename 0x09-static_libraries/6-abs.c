#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: the interger to compute its absolute value
 * Return: absValue
 */
int _abs(int a)
{
	int k = a;

	if (k < 0)
	{
		k = k * (-1);
	}
	return (k);
}
