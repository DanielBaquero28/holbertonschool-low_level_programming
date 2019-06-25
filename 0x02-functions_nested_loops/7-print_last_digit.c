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

int number;

if (r < 0)
{
r = r * -1;
}
number = r % 10;
_putchar(number + '0');
return (number);
}
