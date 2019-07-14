#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - check the code for Holberton School students.
 * @r: The character to print
 *
 * Return: Variable r in absolute value.
 **/

int _abs(int r)
{
  if (r < 0)
    {
      r = r * (-1);
      return (r);
    }
  else
    {
      return (r);
    }
}
