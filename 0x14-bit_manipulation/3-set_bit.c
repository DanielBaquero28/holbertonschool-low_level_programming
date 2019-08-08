#include "holberton.h"
/**
 * set_bit - Sets the value of a given number to 1.
 * @n: Pointer that goes through the decimal number.
 * @index: Index
 * Return: If succeded 1, or -1.
**/

int set_bit(unsigned long int *n, unsigned int index)
{

unsigned long int mask = 1;

if (index > 63)
return (-1);
*n = mask << index | *n;
return (1);
}
