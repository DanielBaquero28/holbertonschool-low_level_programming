#include "search_algos.h"
#include <math.h>

/**
 * min - Finds the minimum out of two numbers
 * @n1: Number 1
 * @n2: Number 2
 * Return: Minimum number between @n1 and @n2
 */

int min(int n1, int n2)
{
	return ((n1 > n2) ? n2 : n1);
}

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: Array of integers
 * @size: Size of @array
 * @value: Value that we'll look for
 * Return: Index of @array of the @value
 */

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int p = 0;

	while (array[min(step, size) - 1] < value)
	{
		p = step;
		step += sqrt(size);
		if (p >= (int)size)
			return (-1);
	}
	while (array[p] < value)
	{
		p++;
		if (p == min(step, size))
			return (-1);
	}
	if (array[p] == value)
		return (p);

	return (-1);
}
