#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: les than 0 if s1 is less than s2, 0 if they're
 * equal more than 0 if is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
