#include "holberton.h"
#include <string.h>

/**
 * _strncpy - Copies a string until n bytes
 * @dest: Pointer
 * @src: Pointer
 * @n: Variable
 * Return: Nothing
**/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != 0; i++)
{
if (n > i)
{
dest[i] = src[i];
}
}
dest[i] = '\0';
return (dest);
}
