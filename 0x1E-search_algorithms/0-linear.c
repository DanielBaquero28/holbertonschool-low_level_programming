#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Array of integers
 * @size: Size of the array
 * @value: Value that we'll look for in @array.
 * Return: Index of the array where @value was found
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
