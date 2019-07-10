#include "holberton.h"

/**
 * is_prime_number - Checks if it is a prime number or not
 * @n: Pointer
 * Return: If it is a prime number or not
**/

int prime_num(int n, int i, int limit);

int is_prime_number(int n)
{
return (prime_num(n, 2, n / 2));
}

/**
 *  prime_num - Prime
 * @n: Number
 * @i: Goes through
 * @stops: Stops when reaches here
 * Return: Integer
**/

int prime_num(int n, int i, int limit)
{
if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
return (0);
else if (n % i != 0 && i <= limit)
return (prime_num(n, i + 1, limit));
else
return (1);
}
