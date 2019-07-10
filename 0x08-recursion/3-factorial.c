#include "holberton.h"
/**
 * factorial - Finds factorial of a given number.
 * @s: Pointer
 * Return: Factorial of a number, or -1 else 1.
**/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
if (n >= 1)
{
return (n * (factorial(n - 1)));
}
return (0);
}
