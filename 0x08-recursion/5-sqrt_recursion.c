#include "holberton.h"
/**
 * _sqrt_recursion - Checks if n is a perfect square root or not.
 * @n: Number that is going to be checked.
 * Return: 0, 1, or -1.
**/
int finder(int n, int i);

int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (finder(n, 1));
}
}

/**
 * finder - Finds square root.
 * @n: Number that is found the square root.
 * @i: Square root
 * Return: Square root
**/

int finder(int n, int i)
{
if (n == (i * i))
{
return (i);
}
else if (n > (i * i))
{
return (finder(n, i + 1));
}
else
{
return (-1);
}
}
