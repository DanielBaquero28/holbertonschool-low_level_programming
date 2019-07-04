#include "holberton.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Pointer
 * @n: Number of elements in array
 */

void reverse_array(int *a, int n)
{
int i;
int temp;

i = 0;
n = n - 1;
while (i <= n)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
}
