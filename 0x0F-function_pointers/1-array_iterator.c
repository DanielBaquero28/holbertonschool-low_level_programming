#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Prints a specified action of a function.
 * @array: Array of actions
 * @size: Size of the array.
 * @action: Action fom function that will be executed according to the user.
 * Return: Nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (array && action)
for (i = 0; i < (int)size; i++)
action(array[i]);
}
