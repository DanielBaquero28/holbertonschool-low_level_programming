#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: What will be printed.
 * @f: Pointer that defines how the name will be printed.
 * Return: Nothing
**/

void print_name(char *name, void (*f)(char *))
{
void (*ptr)(char *);
ptr = f;
ptr(name);
}
