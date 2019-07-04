#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @a: Pointer
 * Return: Returns the alphabet in uppercase
**/

char *string_toupper(char *a)
{
int i;
for (i = 0; a[i] != 0; i++)
{
if (a[i] >= 97 && a[i] <= 122)
a[i] = a[i] - 32;
}
return (a);
}
