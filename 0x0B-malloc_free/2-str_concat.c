#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Fuction which concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: Pointer to a new string created (Sucess), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int i, x, len, len1, len2;
	char *res;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];

	for (x = 0; x < len2; x++, i++)
		res[i] = s2[x];
	res[len] = '\0';

	return (res);
}
