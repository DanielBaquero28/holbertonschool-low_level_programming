#include "holberton.h"
#include <string.h>

/**
 * _strcmp - Compares two strings
 * @s1: Pointer that links with a string
 * @s2: Pointer that links with a string
 *
 * Return: Nothing
**/

int _strcmp(char *s1, char *s2)
{
for ( ; *s1 == *s2; s1++, s2++)
if (*s1 == '\0')
return 0;
return ((*(unsigned char *)s1 < *(unsigned char *)s2) ? *s1 : *s2);
}
