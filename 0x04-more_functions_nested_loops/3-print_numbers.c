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
char i;
for (i = 48; i < 57; i++)
{
_putchar(i + 48);
}
_putchar(10);
}
