#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - Allocates memory using malloc.
 * @min: Minimum Value
 * @max: Maximum Value
 * Return: Pointer to the new allocated memory.
**/

int *array_range(int min, int max)
{
  int *ptr;
  int i;
  if (max > min)
    return (NULL);
  ptr = malloc(((max - min) + 1) sizeof(int));
  if (ptr == NULL)
    return (NULL);
  for (i = 0; i <= (max - min); i++)
    {
      min++;
      ptr[i] = min;
    }
  return (ptr);
}
