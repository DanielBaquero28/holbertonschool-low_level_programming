#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * print_most_numbers - Check the code for Holberton School students.
 *
 * Return: Nothing to return.
**/
void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + 48);
}
_putchar(10);
}
}
