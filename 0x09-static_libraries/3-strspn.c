#include "main.h"

/**
 * *_strspn - Function that gets the length of a prefix substring
 * @s: cosist only of bytes from accept
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the  initial segmen
 * s which consist only of the bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, x;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		x = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				x = 1;
			}
		}
		if (x == 0)
		{
			return (f);
		}
	}
	return (0);
}
