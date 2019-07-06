#include "holberton.h"

/**
 * print_number - Prints a number
 * @a: Variable
 * Return: Nothing
 */
void print_number(int a)
{
int  sign, exp;

exp = 1000000000;
sign = 1;
if (a > 0)
{
a *= -1;
sign *= -1;
}
if  (a != 0)
{
while ((a / exp) ==  0)
{
exp = exp / 10;
}
if (sign == 1)
_putchar('-');
while (exp >= 1)
{
_putchar(-(a / exp) +'0');
a = a % exp;
exp = exp / 10;
}
}
else
_putchar('0');
}
