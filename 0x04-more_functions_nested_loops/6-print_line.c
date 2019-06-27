#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * print_line - Check the code for Holberton School students.
 * @n: The character to print
 *
 * Return: Always 0.
**/

void print_line(int n)
{
n = '-';
int i;

for (i = 0; i < n; i++)
{
_putchar(n + '0');
}
_putchar(10);
}
