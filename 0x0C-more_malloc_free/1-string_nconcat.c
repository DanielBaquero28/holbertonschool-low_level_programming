#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @s1: String that will be concatenated to string 2.
 * @s2: String in which will be concatenated from string 1.
 * @n: Positive Integer
 * Return: Pointer to allocated memory.
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *ptr;
  unsigned int j, k;
  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";
  for (j = 0; s1[j] != '\0'; j++)
    ;
  ptr = malloc(j +(n * sizeof(*s2) + 1) * sizeof(*ptr));
if (ptr == NULL)
  return (NULL);
for (j = 0; s1[j] != '\0'; j++)
  ptr[j] = s1[j];
 for (k = 0; s2[k] != '\0' && k < n; k++, j++)
  ptr[j] = s2[k];
 ptr[j] = '\0';
return (ptr);
}
