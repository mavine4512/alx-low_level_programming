#include "main.h"

/**
 * _islower - check if character is lowercase
 * @c: Checks if the character 'c' is lowercase
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
