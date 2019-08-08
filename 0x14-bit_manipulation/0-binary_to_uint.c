#include "holberton.h"

/**
 * binary_to_uint - Function that converts a binary number 
 * to an unsigned integer.
 * @b: Goes through the string of binary.
 * Return: The converted number if it succeds or 0.
**/

unsigned int binary_to_uint(const char *b)
{

int i, j = 1, k;
unsigned int res = 0;

if (b == NULL)
return (0);
for (k = 0; b[k] != '\0'; k++)
;
for (i = k - 1; i >= 0; i--, j *= 2)
{
if (b[i] != '0' && b[i] != '1')
return (0);
if (b[i] & 1)
res += j;
}
return (res);
}
