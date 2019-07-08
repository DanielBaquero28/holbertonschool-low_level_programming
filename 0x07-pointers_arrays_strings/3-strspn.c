#include "holberton.h"

/**
 * _strspn - Gets the length of the the initial substring that is the same as the second substring.
 * @s: Pointer
 * @accept: Pointer that accepts specific cg¡haracters
**/

unsigned int _strspn(char *s, char *accept)
{
  int i, len;
  while (*s != '\0')
    {
      i = 0;
      len = 0;
      while (s[i] == *accept)
	{
      len++;
      s++;
      return (len);
	}    
    }

}
