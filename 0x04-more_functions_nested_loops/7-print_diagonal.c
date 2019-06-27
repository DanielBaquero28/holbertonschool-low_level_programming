#include "holberton.h"

/**
 * print_diagonal - Check the code for Holberton School students.
 * @n: The character to print
 *
 * Return: Nothing
**/
void print_diagonal(int n)
{
int i;
int b;

for (i = 0; i < n; i++)
{
for (b = 0; b <= i; b++)
{
if (b != i)
{
_putchar(' ');
}
else
{
_putchar(92);
}
}
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
