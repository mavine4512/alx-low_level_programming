#include <stddef.h> /*for size_t*/
#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: ptr to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
		return;/*check wether the input parameters are valid for NULL*/

	for (i = 0; i < size; i++)
		action(array[i]);
	/*loop arr and applies the fun pointed to by action to each element of arr*/
}
