#include "main.h"

int actual_sqrl_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: init with sq root
 *
 * Return: 0 for nutural
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrl_recursion(n, 0));
}

/**
 * actual_sqrl_recursion - recursion to find the natural
 * sq root of a number
 * @n: int to calculate the sq root
 * @i: interator
 *
 * Return: the result sq root
 */
int actual_sqrl_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrl_recursion(n, i + 1));
}
