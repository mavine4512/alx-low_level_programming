#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: A pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	while (i < nmemb * size && ptr)
		((char *)ptr)[i++] = 0;
	return (ptr);
}
