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
  int i, j, count, count2;

  for (i = 0, j = 0; dest[i] != 0, src[j]; i++, j++)
    {

    }
  i = 0;
  while (dest[i] != '\0')
    {
      count = dest[i];
      _putchar(count);
    }
  j = 0;
  while (src[j] != '\0')
    {
      count2 = src[j];
      _putchar(count2);
    }
  return (0);
}
