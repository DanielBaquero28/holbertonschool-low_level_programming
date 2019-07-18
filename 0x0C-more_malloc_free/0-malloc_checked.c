#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Positive integer
 * Return: Pointer to allocated memory.
**/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit (98);
return (ptr);
}
