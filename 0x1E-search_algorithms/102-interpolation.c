#include "search_algos.h"

/**
 * interpolation_search - search for a value in a sorted array of int
 * using an interpolation search algorithm
 * @array: pointer to first element of array to search
 * @size: number of element in an array
 * @value: value to search
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high = size - 1;
	size_t pos;

	if (!array)
		return (-1);

	low = 0;
	while ((array[high] != array[low]) &&
			(value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
