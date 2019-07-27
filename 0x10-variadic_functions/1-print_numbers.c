#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Prints it's paramenters.
 * @separator: Is the string to be printed between numbers
 * @n: Constant variable
 * Return: All parameters printed.
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list valist;
va_start(valist, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(valist, unsigned int));
if (i < (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
va_end(valist);
printf("\n");
}
