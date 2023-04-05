#include "main.h"

int actual_pri(int n, int i);

/**
 * is_prime_number - if the input integer is a prime number
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_pri(n, n - 1));
}

/**
 * actual_pri - calculates if a number is prime
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_pri(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_pri(n, i - 1));
}
