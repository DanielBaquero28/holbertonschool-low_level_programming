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
putchar(49);
}
else
{
putchar(48);
}
return (0);
}
