#include "main.h"

/**
 * _islower - check id character is lowercase
 * @c: checks if the character 'c' is lowercase
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
