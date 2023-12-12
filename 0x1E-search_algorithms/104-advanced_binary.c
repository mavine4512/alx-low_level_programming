#include "search_algos.h"

int binary_search_recursion(int  *array, int value,
		size_t low, size_t high);
/**
 * binary_search_recursion - helper to 'advanced_binary', recursively searches
 * for a value in an int array
 * @array: pointer to first elelment of array to seach
 * @value: value to search for
 * @low: string index in array
 * @high: ending index in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int binary_search_recursion(int  *array, int value,
		size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid  =  (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
						mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
						low, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of int
 * using a binary search algorithm. unlike `binary_search`, consistently
 * returns first appearance of `value` in array
 * @array: pointer to first elements in an array to search
 * @value: Value to search for
 * @size: number of elements in an array
 * Return: first index containing value or -1 if value not found
 * or array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}
