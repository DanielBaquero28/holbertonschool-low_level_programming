#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer.
 * @array: Iterated array.
 * @size: Size of the array.
 * @cmp: Compares if it is an integer or not.
 * Return: Nothing
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
if (size <= 0)
return (-1);
for (i = 0; i < (int)size; i++)
if (cmp(array[i]))
return (i);
}
return (-1);
}
