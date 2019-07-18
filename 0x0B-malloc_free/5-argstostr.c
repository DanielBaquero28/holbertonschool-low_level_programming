#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Length string.
 * @s: String
 * Return: Length
**/

int _strlen(char *s)
{
int len = 0;

if (*s != '\0')
{
len++;
return (len + _strlen(s + 1));
}
return (len);
}
/**
 * _strcat - Concatenates two strings.
 * @dest : Pointer
 * @src : Pointer
 * Return: Dest
**/

char *_strcat(char *dest, char *src)
{
int sz1 = _strlen(dest);
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[sz1 + i] = src[i];
}
dest[sz1 + i] = '\0';
return (dest);
}

/**
 * argstostr - Concatenates all the arguments.
 * @ac: Count argument
 * @av: Vector argument
 * Return: String or NULL
**/
char *argstostr(int ac, char **av)
{
char *a;
int i, sz = 0;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
sz += _strlen(av[i]) + 1;
}
a = malloc(sz + 1);
if (a == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
_strcat(a, av[i]);
_strcat(a, "\n");
}
return (a);
}
