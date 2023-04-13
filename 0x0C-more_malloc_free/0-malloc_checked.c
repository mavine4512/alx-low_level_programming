#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - use of malloc to allocate memory
 * @b: memory to be allocated
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem; /*variable of a pointer for memory*/

	mem = malloc(b); /*allocated memory by used of malloc function*/
	if (mem == 0)
		exit(98); /*check if memory is NULL or zero to exit the program*/
	return (mem);
}
