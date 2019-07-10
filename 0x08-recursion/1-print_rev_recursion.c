#include "holberton.h"
/**
 * _print_rev_recursion - Gets the length of the the initial substring.
 * @s: Pointer
 * Return: Nothing
**/

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
