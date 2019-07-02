#include "holberton.h"

/**
 * puts_half - Prints the half of a string
 * @str: String to use
 *
 * Return: Nothing
**/

void puts_half(char *str)
{
int i, j;
char word;

for (i = 0; str[i] != 0; i++)
{
}
j = (i + 1) / 2;
 while (str[j] != 0)
{
word = str[j];
_putchar(word);
j++;
}
_putchar(10);
}
