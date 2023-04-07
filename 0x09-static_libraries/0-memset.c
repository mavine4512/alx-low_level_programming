#include "main.h"

/**
 * _memset - Fuction that fills memory with a constant byte
 * @s: memory srea to be filled
 * @b: charactor to copy
 * @n: number of time to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
