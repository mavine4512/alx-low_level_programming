#include "main.h"

/**
 * rot13 -  Encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	char *p = s;

	while (*p)
	{
		if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
		{
			*p += 13;
		}
		else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'z'))
		{
			*p -= 13;
		}
		p++;
	}
	return (s);
}
