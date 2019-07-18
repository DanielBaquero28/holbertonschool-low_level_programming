#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - Allocates memory using malloc
 * @nmemb: Number of elements in the array.
 * @size: Bytes per element.
 * Return: Pointer to allocated memory.
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *_memset(char *stri, char b, unsigned int size);

void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, (nmemb * size));
return (ptr);
}
/**
 * _memset - Counts the number of bytes.
 * @stri: Pointer to go through the array
 * @b: Where it it stored
 * @size: Total bytes of each word
 * Return: Bytes stored
 **/
void *_memset(char *stri, char b, unsigned int size)
{
unsigned int i;

for (i = 0; i < size; i++)
stri[i] = b;
return (stri);
}
