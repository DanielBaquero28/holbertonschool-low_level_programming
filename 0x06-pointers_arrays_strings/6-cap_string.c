#include "holberton.h"

/**
 * cap_string - Capitalizes all the words
 * @a: Pointer
 * Return: Returns characters
**/

char *cap_string(char *a)
{
int i, j;
j = 0;
if (a[j] >= 97 && a[j] <= 122)
{
a[j] = a[j] - 32;
}
for (i = 1; a[i] != 0; i++)
{
if ((a[i - 1] == ' ' || a[i - 1] == '\n' || a[i - 1] == '\t'
|| a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '!'
|| a[i - 1] == '?' || a[i - 1] == '"' || a[i - 1] == '('
|| a[i - 1] == ')' || a[i - 1] == '{' || a[i - 1] == '}'
|| a[i - 1] == '.') && (a[i] > 'a' && a[i] < 'z'))
{
a[i] = a[i] - 32;
}
}
return (a);
}
