#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer
 * @b: Character
 * @n: Unsigned Integer
 * Return: A pointer to the memory area s.
**/

char *_memset(char *s, char b, unsigned int n)
{
  int i;
  for (i = 0; i < n; i++)
    {
      s[i] = b;
    }
  return (s);
}
