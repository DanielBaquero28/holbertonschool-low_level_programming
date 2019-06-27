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

i = 0;
do
{
_putchar(92 + '0');
} while (i < n);
_putchar('\n');
}
