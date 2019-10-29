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
 * bubble_sort - Sorts an array of integers by swapping two numbers each
 * iteration depending on their value.
 * @array: The array of numbers entered.
 * @size: The size of the array.
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{

	size_t i, j, flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
