#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * int using the linear search algorithm
 *
 * @array: input array
 * @size: size of array
 * @value: value to search in
 * Return: 0
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x =0;

	if (!array)
	{
		return (-1);
	}

	for (; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
