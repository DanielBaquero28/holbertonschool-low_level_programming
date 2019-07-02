#include "holberton.h"

/**
 * swap_int - Updates a pointer to have the value of 98
 * @a: The pointer that swaps it's value with b
 * @b: The pointer that swaps it's value with a
 * Return: Nothing
**/
void swap_int(int *a, int *b)
{

int temp;

temp = *b;
*b = *a;
*a = temp;
}
