#include "holberton.h"

/**
 * _memcpy - Function that copies memory area.
 * @dest: Pointer
 * @src: Pointer
 * @n: Unsigned Integer
 * Return: A pointer to dest.
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  for (i = 0; i < n; i++)
    {
      dest[i] = src[i];
    }
  return (dest);
}
