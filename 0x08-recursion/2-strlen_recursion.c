#include "holberton.h"
/**
 * _strlen_recursion - String length
 * @s: Pointer
 * Return: Length of the string.
**/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return(_strlen_recursion(s) + 1);
}
