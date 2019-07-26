#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints it's parameters strings.
 * @separator: Is the string to be printed between numbers.
 * @n: Constant variable that corresponds to the number of arguments passed.
 * Return: All parameters printed strings.
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list valist;
char *ptr;
va_start(valist, n);
if (separator == NULL)
return;
for (i = 0; i < n; i++)
{
ptr = va_arg(valist, char *);
printf("%s", ptr);
if (i < (n - 1) && separator != NULL)
{
if (ptr == NULL)
{
printf("(nil)");
}
printf("%s", separator);
}
}
va_end(valist);
printf("\n");
}
