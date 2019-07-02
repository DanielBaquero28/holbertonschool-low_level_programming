#include "holberton.h"

/**
 * print_array - Print on the elements of an array
 * @a: The pointer where the elements are taken from
 * @n: Variable that prints the elements
 * Return: Nothing
**/

void print_array(int *a, int n)
{
*a = n;
 printf("%d, ", a[0]);
 printf("%d, ", a[1]);
 printf("%d, ", a[2]);
 printf("%d, ", a[3]);
 printf("%d, ", a[4]);
}
