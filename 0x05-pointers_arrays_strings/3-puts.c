#include "holberton.h"
#include <stdio.h>

/**
 * _puts - Prints a string.
 * @str: The pointer that contains the string.
 * 
 * Return: Nothing
**/

void _puts(char *str)
{

int i;
int word;

for (i = 0; str[i] != 0; i++)
{
word = str[i];
_putchar(word);
}
_putchar('\n');
}
