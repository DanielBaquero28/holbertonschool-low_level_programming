#include "holberton.h"
/**
 * print_last_digit - Check the code for Holberton School students.
 * @r: parameter
 * Return: r
 */
int print_last_digit(int r)
{
int digit;

digit = r % 10;
if (digit < 0)
{
digit = digit * -1;
}
_putchar(digit + '0');
return (digit);
}
