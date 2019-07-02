#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print on the elements of an array
 * @a: The pointer where the elements are taken from
 * @n: Variable that prints the elements
 * Return: Nothing
**/

void print_array(int *a, int n)
{

int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if ( i != n - 1)
printf(", ");
}
printf("\n");
}

