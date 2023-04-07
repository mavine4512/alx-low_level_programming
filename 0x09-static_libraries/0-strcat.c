#include "main.h"

/**
 * _strcat - function that concateenates two strings
 * @dest: the first string to be concatenated
 * @src: second string to be concatenated
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
