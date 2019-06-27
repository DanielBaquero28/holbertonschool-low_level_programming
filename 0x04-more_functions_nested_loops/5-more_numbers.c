#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * more_numbers - Check the code for Holberton School students.
 *
 * Return: Nothing to return.
**/

void more_numbers(void)
{
int i;
int rows;
for (rows = 1; rows <= 10; rows++)
{
for (i = 0; i <= 14; i++)
{
if(i >= 9)
_putchar((i / 10) + 48);
_putchar((i % 10) + 48);
}
_putchar(10);
}
}
