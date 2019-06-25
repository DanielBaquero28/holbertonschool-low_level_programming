#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - Check the code for Holberton School students.
 * @r: The character to print
 *
 * Return: The last digit of a number.
**/
int print_last_digit(int r)
{

int digit;

if (r < 0)
{
r = r * -1;
}
digit = r % 10;
_putchar(digit + '0');
return (digit);
}
