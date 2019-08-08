#include "holberton.h"
/**
 * clear_bit - Sets a specific bit to 0 (which means to clear it).
 * @n: Pointer that travels through decimal number.
 * @index: Index
 * Return: If succeded 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n &= (~(1 << index));
return (1);
}
