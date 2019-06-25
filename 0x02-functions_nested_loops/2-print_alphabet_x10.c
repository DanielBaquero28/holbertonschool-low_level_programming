#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
**/
void print_alphabet_x10(void)
{
int i;
int l;

l = 'a';
for (i = 0; i < 10 ; i++)
{
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
l = 'a';
}
}
