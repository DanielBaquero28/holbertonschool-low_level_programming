#include "holberton.h"
#include <string.h>

/**
 * _strncpy - Copies a string until n bytes
 * @dest: Pointer
 * @src: Pointer
 * @n: Variable
 * Return: Nothing
 **/

char *_strncpy(char *dest, char *src, int n)
{
  int i, j;

  i = 0;
  j = 0;
  while (i != n)
    {
      dest[j] = src[i];
      if (src[i] == '\0')
	{
	  dest[j] = '\0';
	  break;
	}
      j++;
      i++;
    }
  while (j != n)
    dest[j++] = '\0';
  return (dest);
}
