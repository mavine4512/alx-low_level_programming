#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values and number of elements
 * Return: Apointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr, i; /*variable of an interge and a pointer*/

	if (min > max)
		return (NULL); /*check if a minimum is greater then maximum then return NULL*/

	ptr = malloc((max - min + 1) * sizeof(*ptr));/* Allocate a memory using malloc function to create a block of memory that is large enough to hold max - min value plus 1 of type pointer*/
	if (ptr == NULL)
		return (NULL);/*check if pointer is equal to NULL then return NULL*/
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min; /* loop condition the value of min is assigned to ptr[i], and then both i and min are incremented by 1 using the i++, min++ expression.*/
	return (ptr);
}
