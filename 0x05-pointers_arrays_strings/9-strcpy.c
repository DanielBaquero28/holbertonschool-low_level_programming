#include "holberton.h"
#include <string.h>

/**
 * _strcpy - Copies a string pointed to src
 * @dest: Pointer
 * @src: Pointer
 *
 * Return: Nothing
**/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != 0; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
