#include "holberton.h"
#include <stdio.h>

/**
 * print_line - Check the code for Holberton School students.
 * @n: The character to print
 *
 * Return: Always 0.
**/
void print_line(int n)
{
  int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar(10);
}
