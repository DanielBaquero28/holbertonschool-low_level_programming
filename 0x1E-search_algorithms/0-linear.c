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
	int i, flag;

	flag = 0;
	if (!array)
		return (-1);

	for (i = 0; flag == 0 && (size_t)i < size; i++)
	{
		if (array[i] == value)
		{
			flag = 1;
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}
