#include "main.h"

/**
 * print_sign - check if character is lowercase
 * @n: Checks if the character 'n' is grater than or equal to zero
 * Return: 1 if n is greater then zero,-1 id is less than zero
 * 0  otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
