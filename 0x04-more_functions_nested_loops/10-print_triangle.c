#include "holberton.h"

/**
 * print_triangle - Check the code for Holberton School students.
 * @size: The size triangle
 *
 * Return: Nothing
**/
void print_triangle(int size)
{
int i;
int b;
int line;

for (i = 0; i < size; i++)
{
for (b = 0; b < size; b++)
{
line = size - i - 1;
if (b < line)
{
_putchar(32);
}
else
_putchar(35);
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
