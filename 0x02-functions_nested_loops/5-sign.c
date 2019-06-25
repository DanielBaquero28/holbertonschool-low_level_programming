#include <stdio.h>
#include "holberton.h"

/**
* print_sign - Check the code for Holberton School students.
* @n: The character to print
*
* Return: Depends on symbol.
**/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
