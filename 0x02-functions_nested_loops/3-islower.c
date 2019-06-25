#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 * _islower - Check the code for Holberton School students.
 * @c: The character to print
 *
 * Return: Always 0.
**/

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
