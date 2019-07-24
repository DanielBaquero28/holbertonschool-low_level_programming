#include "function_pointers.h"
#include <stdio.h>

/**
 * op_add - Adds two integers
 * @a: int 1
 * @b: int 2
 * Return: Additon
**/

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Subtracts an integer by another
 * @a : int 1
 * @b: int 2
 * Return: Subtraction
**/

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: int 1
 * @b: int 2
 * Return: Multiplication
**/

int op_mul(int a, int b)
{
  return (a * b);
}

/**
 * op_div - Divides an integer by another
 * @a: int 1
 * @b: int 2
 * Return: Division
**/

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - Calculates the reminder of the division between a number and another
 * @a: int 1
 * @b: int 2
 * Return: Reminder
**/

int op_mod(int a, int b)
{
return (a % b);
}
