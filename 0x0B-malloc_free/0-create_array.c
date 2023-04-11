#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of an array to be created
 * @c: the  character to initialized  the array c
 * Return: Pointer to array (Success), Null (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i = 0;

	n = malloc(size * sizeof(char));

	if (n == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		n[i] = c;
		i++;
	}
	return (n);
}
