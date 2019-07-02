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
char word;

for(i = 0; s[i] != 0; i++)
{

} 
for(i = i - 1; i >= 0; i--)
{
word = s[i];
_putchar(word);
}
_putchar(10);
}
