#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: first string to be append
 * @s2: second string to be apped
 * @n: number of bytes to concat
 *
 * Return: Pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, x = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!str)
		return (NULL);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		str[i++] = s2[x++];

	while (n >= len2 && i < (len1 + len2))
		str[i++] = s2[x++];

	str[i] = '\0';
	return (str);
}
