#include "sort.h"

/**
 * partition - Sorts an array of integers in ascending order using the
 * Quick sort algorithm.
 * @array: Array of integers.
 * @first: First element of the array.
 * @last: Last element of the array.
 * @size: Size of the array.
 * Return: Nothing
 */

void partition(int *array, int first, int last, int size)
{

	int i, f, pivot, help;

	if (first < last)
	{

		pivot = last;
		f = first;

		for (i = first; i < last; i++)
		{
			if (array[i] < array[pivot])
			{
				if (i != f)
				{
					help = array[i];
					array[i] = array[f];
					array[f] = help;
					print_array(array, size);
				}
				f++;
			}
		}

		if (f != pivot && array[f] != array[pivot])
		{
			help = array[f];
			array[f] = array[pivot];
			array[pivot] = help;
			print_array(array, size);
		}
		partition(array, first, f - 1, size);
		partition(array, f + 1, last, size);
	}

}

/**
 * quick_sort - Executes quicksort algorithm depending on input.
 * @array: Array of integers.
 * @size: Size of the array.
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	partition(array, 0, size - 1, size);
}
