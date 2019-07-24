#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: What will be printed.
 * @f: Pointer that defines how the name will be printed.
 * Return: Nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
  int i;
  if (action && array)
  for (i = 0; i < (int)size; i++)
    {
      action(array[i]);
    }
}
