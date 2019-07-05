#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @a: Pointer that points to a string
 * Return: A string
**/


char *leet(char *a)
{
int i, j, k;
char alpha[] = "oOlLeEaAtT";
char replace[] = "0011334477";

i = 0;
while (a[i] != '\0')
{
j = 0;
k = 0;
while (alpha[j] != '\0')
{
if (a[i] == alpha[j])
{
k = j;
a[i] = replace[k];
}
j++;
}
i++;
}
return (a);
}
