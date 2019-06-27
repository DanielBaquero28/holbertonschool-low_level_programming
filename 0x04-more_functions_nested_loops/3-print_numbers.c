#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * print_numbers - Check the code for Holberton School students.
 *
 * Return: Nothing to return.
**/

void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
