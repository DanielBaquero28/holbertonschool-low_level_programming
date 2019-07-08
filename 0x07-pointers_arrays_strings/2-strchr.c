#include "holberton.h"
#include <stdlib.h>

/**
 * _strchr - Function that copies memory area.
 * @s: Pointer
 * @c: Character that starts from in order to print.
 * Return: A pointer to dest.
**/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
else
return (NULL);
}
