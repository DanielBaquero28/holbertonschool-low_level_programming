#include "holberton.h"
/**
 * _strspn - Gets the length of the the initial substring.
 * @s: Pointer
 * @accept: Pointer that accepts specific cg¡haracters
 * Return: Number of bytes.
**/

unsigned int _strspn(char *s, char *accept)
{
unsigned int len;
int i, j, a;

i = 0;
while (s[i] != '\0')
{
a = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
a = 1;
}
j = 0;
if (a == 0)
break;
len++;
i++;
}
return (i);
}
