#include "holberton.h"

/**
 * print_rev - Will print a string in reverse
 * @s: The pointer that will be printed in reverse
 *
 * Return: Nothing
**/

void print_rev(char *s)
{
int i;
int word;

for (i = 62; s[i] != 0; i--)
{
word = s[i];
_putchar(word);
}
_putchar(10);
}
