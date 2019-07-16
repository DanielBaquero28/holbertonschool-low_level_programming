#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Check the code for Holberton School students.
 * @size: Arrays size
 * @c: Specific character
 * Return: Always 0.
**/

char *create_array(unsigned int size, char c)
{
  char *ar;
  int i;
  if (size != 0)
    {
      ar = malloc(size * sizeof(char));
    }
  else
    {
      return(NULL);
    }
  if (size == 0)
    {
      return (NULL);
    }
  i = 0;
  while (i < size)
    {
      ar[i] = c;
      i++;
    }
  return (0);
}
