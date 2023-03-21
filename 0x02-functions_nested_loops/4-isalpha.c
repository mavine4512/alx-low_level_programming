#include "main.h"

/**
 * _isalpha - check if character is lowercase
 * @c: Checks if the character 'c' is lowercase
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
