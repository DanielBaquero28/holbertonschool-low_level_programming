#include "holberton.h"

/**
 * rev_string - Will print a string in reverse
 * @s: The pointer that will be printed in reverse
 *
 * Return: Nothing
**/

void rev_string(char *s)
{
int i, j;
char word;

for (i = 0; s[i] != 0; i++)
{
}
j = 0;
i = i - 1;
while (j < i)
{
word = s[i];
s[i] = s[j];
s[j] = word;
j++;
i--;
}
}
