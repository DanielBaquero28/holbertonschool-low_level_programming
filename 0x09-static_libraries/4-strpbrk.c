#include "holberton.h"
#include <stdlib.h>

/**
 * _strpbrk - Searches for a string.
 * @s: Pointer
 * @accept: Pointer that accepts specific cg¡haracters
 * Return: A pointer to the byte in s that matches *accept
 **/

char *_strpbrk(char *s, char *accept)
{
  int i, j, a;

  i = 0;
  while (s[i] != '\0')
    {
      a = 0;
      for (j = 0; accept[j] != '\0'; j++)
	{
	  if (s[i] == accept[j])
	    a = 1;
	}
      j = 0;
      if (a == 1)
	return (i + s);
      i++;
    }
  return (NULL);
}
