#include "holberton.h"

/**
 * print_square - Check the code for Holberton School students.
 * @size: The character to print
 *
 * Return: Always 0.
**/

void print_square(int size)
{
int i;
int b;

for (i = 0; i < size; i++)
{
for (b = 0; b < size; b++)
{
_putchar(35);
}
_putchar(10);
}
if (size <= 0)
_putchar('\n');
}
