#include "sort.h"

/**
 * swap - Swaps the value of two pointers.
 * @num1: Pointer that points to number one.
 * @num2: Pointer that points to number two.
 * Return: Nothing
 */

void swap(int *num1, int *num2)
{
	int temp = 0;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}


/**
 * shellsort - Sorts @array with the shell algorithm.
 * @array: Array of integers.
 * @size: The number of integers in the array.
 * @gap: Gap of integers.
 * Return: Nothing
 */

void shellsort(int *array, int size, int gap)
{

	int i, j;

	for (i = 0; (i + gap) < size; i++)
	{
		for (j = i + gap; (j - gap) >= 0; j -= gap)
		{
			if (array[j] < array[j - gap])
				swap(&array[j], &array[j - gap]);
		}
	}
	print_array(array, size);
}

/**
 * shell_sort - Sorts @array with the shell algorithm.
 * @array: Array of integers.
 * @size: The number of integers in the array.
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
	size_t gap;

	gap = 1;
	while(gap < size)
		gap = (gap * 3) + 1;

	while ((gap = (gap - 1) / 3) > 0)
		shellsort(array, size, gap);
}
