#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 * @n: interge to be concatenated
 *
 * Return: a pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
