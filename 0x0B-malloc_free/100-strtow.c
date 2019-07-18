#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - splits a string into words.
 * @str: all str
 *
 * Return: Double pointer
 */
char **strtow(char *str)
{
int i, j, k, l, words = 0, letters = 0;
char **a;

for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && str[i + 1] == ' ')
words++;
}
a = malloc(sizeof(char *) * words);
if (a == NULL)
return (NULL);
for (i = 0; i < words; i++)
{
for (l = 0; str[l]; l++)
{
if (str[l] != ' ')
letters++;
if (str[l + 1] == ' ')
break;
}
a[i] = malloc(letters);
if (a[i] == NULL)
{
for (j = 0; j <= i; j++)
{
free(a[j]);
}
free(a);
return (NULL);
}
for (k = l - letters; k < l + letters; k++)
a[i][k] = str[k];
}
return (a);
}
