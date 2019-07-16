#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Check the code for Holberton School students.
 * @s1: String 1
 * @s2: String 2
 * Return: Concatenated string.
**/

char *str_concat(char *s1, char *s2)
{
  int i, a, b;
  char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
for (a = 0; s2[a] != '\0'; a++)
a++;
str = malloc((i + a) * sizeof(*str));
if (str == NULL)
return (NULL);
for (b = 0; s1[b] != '\0'; b++)
str[b] = s1[b];
a = 0;
while (s2[a] != '\0')
{
str[b] = s2[a];
a++;
b++;
}
str[b] = '\0';
return (str);
free(str);
}
