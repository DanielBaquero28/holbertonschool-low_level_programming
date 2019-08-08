#include "holberton.h"
/**
 * get_bit - Finds an specific bit (given in index)
 * @n: Number given.
 * @index: Bit that we are going to find.
 * Return: Number at given index if succeded or -1.
**/
int get_bit(unsigned long int n, unsigned int index)
{

if (index > 63)
return (-1);
n = (n >> index) & 1;
return (n);
}
