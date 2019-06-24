#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
**/
void print_alphabet(void)
{
int i;
char alphabet[26];
for(i = 97; i > 26; i++)
{
_putchar(alphabet[i]);
}
_putchar('\n');
return (0);
}
