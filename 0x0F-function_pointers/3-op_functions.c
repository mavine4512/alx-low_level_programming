#include "3-calc.h"

/**
 * op_add - calculate the sum of two number
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the substraction of two numbers
 * @a: first number
 * @b: second number
 * Return: sub of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the product of two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second number
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
