#include "holberton.h"
/**
 * _pow_recursion - Powers x to y.
 * @x: Number to be powered
 * @y: Number that powers.
 * Return: The power of two given numbers.
**/
int _pow_recursion(int x, int y)
{
  if (y < 0)
    {
      return (-1);
    }
  if (y == 0)
    {
      return (1);
    }
  if (y == 1)
    {
      return x;
    }
  return (_pow_recursion(x, y - 1) * x);
}
