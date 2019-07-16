#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - Duplicates a string to a newly allocated space in memory.
 * @str: String duplicated
 * Return: NULL or pointer.
**/

char *_strdup(char *str)
{
char *ptr;
int i, j;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
i++;
ptr = malloc(i  *sizeof(char));
if (ptr == NULL)
return (NULL);
j = 0;
while (j < i)
{
ptr[j] = str[j];
j++;
}
return (ptr);
}
