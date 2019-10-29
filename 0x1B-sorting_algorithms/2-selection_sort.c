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
 * selection_sort - Sorts the array by finding the lowest number.
 * @array: Array of integers.
 * @size: Size of the array.
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{

	size_t i, j, current_idx, flag;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		current_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[current_idx])
			{
				current_idx = j;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			swap(&array[current_idx], &array[i]);
			print_array(array, size);
		}
	}

}
