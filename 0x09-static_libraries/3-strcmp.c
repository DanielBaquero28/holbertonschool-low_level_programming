#include "holberton.h"
#include <string.h>

/**
 * _strcmp - Compares two strings
 * @s1: Pointer that links with a string
 * @s2: Pointer that links with a string
 *
 * Return: Nothing
 **/

int _strcmp(char *s1, char *s2)
{
  int i;
  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[i] > s2[i])
	{
	  return (s1[i] - s2[i]);
	}
      if (s1[i] < s2[i])
	{
	  return (s1[i] - s2[i]);
	}
      i++;
    }
  return (0);
}
