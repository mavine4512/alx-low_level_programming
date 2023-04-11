#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter
 * @str: an input pointer of  string to duplicate
 * Return: Pointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *m;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	m = malloc(sizeof(char) * (len + 1));

	if (m == NULL)
		return (NULL);

	while ((m[i] = str[i]) != '\0')
		i++;

	return (m);
}
