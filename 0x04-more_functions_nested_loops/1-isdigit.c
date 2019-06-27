#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * _isdigit - Check the code for Holberton School students.
 * @c: The character to print
 *
 * Return: Always 0.
**/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
return (0);
}
