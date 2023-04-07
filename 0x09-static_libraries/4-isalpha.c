#include "main.h"

/**
 * _isalpha - chack if character is lowercase
 * @c: checks if the character 'c' is lowercase
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
