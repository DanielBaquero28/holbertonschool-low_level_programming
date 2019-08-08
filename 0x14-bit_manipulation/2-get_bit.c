#include "holberton.h"
/**
 * get_bit - Finds an specific bit (given in index)
 * @n: Number given.
 * @index: Bit that we are going to find.
 * Return: Number at given index if succeded or -1.
**/
int get_bit(unsigned long int n, unsigned int index)
{

unsigned long int mask = 1, j;

if (index > 63)
return (-1);
j = mask << index & n;
if (j)
return (1);
else
return (0);
return (-1);
}
