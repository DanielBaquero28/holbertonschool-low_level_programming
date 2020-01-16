#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Array of integers
 * @size: Size of @array
 * @value: Value that we want to find in @array
 * Return: Index of @array where @value was found
 */

int binary_search(int *array, size_t size, int value)
{int left = 0, right = (int)size - 1, middle, i;

	if (!array)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i <= (int)size - 1; i++)
	{
		if (i == (int)size - 1)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	while (left <= right)
	{middle = ((left + right) / 2);
		if (array[middle] < value)
		{left = middle + 1;
			if (left <= right)
				printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				if (i == right)
					printf("%d\n", array[i]);
				else
					printf("%d, ", array[i]);
			}
		}
		else if (array[middle] > value)
		{right = middle - 1;
			printf("Searching in array: ");
			for (i = 0; i <= right; i++)
			{
				if (i == right)
					printf("%d\n", array[i]);
				else
					printf("%d, ", array[i]);
			}
		}
		else
			return (middle);
	}
	return (-1);
}
