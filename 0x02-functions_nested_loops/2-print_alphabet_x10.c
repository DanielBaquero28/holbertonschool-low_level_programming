#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 **/
void print_alphabet_x10(void);
{
int i;

for(i = 97; i <= 122; i++)
{
10 * (_putchar(i));
}
_putchar('\n');
}
