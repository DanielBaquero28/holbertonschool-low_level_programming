#include "holberton.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings with pointers.
 * @dest: Pointer
 * @src: Pointer
 *
 * Return: Characters
 **/
char *_strcat(char *dest, char *src)
{
  int i, j;

  for (i = 0; dest[i] != 0; i++)
    {
    }
  j = 0;
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      j++;
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
