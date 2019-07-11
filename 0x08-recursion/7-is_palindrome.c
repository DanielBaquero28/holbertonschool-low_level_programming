#include "holberton.h"
/**
 * strsize - Size of a str
 * @s: Pointer with the string
 * Return: Integer
**/

int strsize(char *s)
{
int z = 0;

if (*s != '\0')
{
z++;
return (z + strsize(s + 1));
}
return (z);
}
/**
 * comp_char - Compares characters
 * @a: Pointer
 * @z: Pointer
 * @i: Pointer
 * Return: 1 or 0
**/

int comp_char(char *a, int z, int i)
{
if (i >= z)
return (1);
else if (a[i] == a[z])
return (comp_char(a, z - 1, i + 1));
else
return (0);
}
/**
 * is_palindrome - Size of a string
 * @s: Pointer
 * Return: 1 or 0
**/

int is_palindrome(char *s)
{
int z = strsize(s);
int i = 0;

return (comp_char(s, z - 1, i));
}
