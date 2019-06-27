#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * _isalpha - Check the code for Holberton School students.
 * @c: The character to print
 *
 * Return: Always 0.
**/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
