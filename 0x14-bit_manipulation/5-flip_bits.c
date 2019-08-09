#include "holberton.h"

/**
 * flip_bits_count - Function that counts bits.
 * @n: Number
 * Return: Number of bits.
**/

unsigned int flip_bits_count(unsigned long int n)
{
unsigned int count;

count = 0;
while (n)
{
count += n & 1;
n = n >> 1;
}
return (count);
}

/**
 * flip_bits - Returns the number of bits that needs to be fliped.
 * @n: Number1
 * @m: Number2
 * Return: Value in binary.
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
return (flip_bits_count(n ^ m));
}
