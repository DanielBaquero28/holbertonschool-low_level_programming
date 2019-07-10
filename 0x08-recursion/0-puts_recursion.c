#include "holberton.h"
/**
 * _puts_recursion - Gets the length of the the initial substring.
 * @s: Pointer
 * Return: Nothing
**/

void _puts_recursion(char *s)
{
int i;
i = 0;
if (s[i] == '\0')
{
_putchar(10);
return;
}
_putchar(s[i]);
s++;
_puts_recursion(s);
}
