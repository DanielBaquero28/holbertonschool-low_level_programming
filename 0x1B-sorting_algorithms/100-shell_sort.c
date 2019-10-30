#include "sort.h"

/**
 * shell_sort - Sorts @array with the shell algorithm.
 * @array: Array of integers.
 * @size: The number of integers in the array.
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{

	int i, j, gap, help;

	for (gap = size / 2; gap > 0; gap /= 2)
	{
		for (i = gap; i < (int)size; i += 1)
		{
			help = array[i];
			for (j = i; j >= gap && array[j - gap] > help; j -= gap)
				array[j] = array[j - gap];

			array[j] = help;
		}
	}
	print_array(array, size);

}
