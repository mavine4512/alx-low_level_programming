#include <stdlib.h>
#include "main.h"

/**
 * count_words - child function to count number of words in a string
 * @k: string to evaluate
 * Return: total words counted
 */
int count_words(char *k)
{
	int g, c, x;

	g = 0;
	x = 0;

	for (c = 0; k[c] != '\0'; c++)
	{
		if (k[c] == ' ')
			g = 0;
		else if (g == 0)
		{
			g = 1;
			x++;
		}
	}
	return (x);
}
/**
 * **strtow - Function that splits a string into words
 * @str: string to be splited
 * Return: Pointer to an array of string (words)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
