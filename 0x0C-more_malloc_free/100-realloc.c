#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Function that reallocates a memory block
 * @ptr: A pointer to the memory previously allocated
 * @old_size: Size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: Pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
		return (ptr1);
	}

	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);
	copy = ptr;
	for (i = 0; i < old_size; i++)
		ptr1[i] = copy[i];
	free(ptr);
	return (ptr1);
}
