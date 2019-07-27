#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - Prints Everything
 * @format: Is a list of types of arguments passed to the function
 * Return: Nothing
 **/

void print_all(const char * const format, ...)
{
va_list valist;
int i = 0, j = 0;
char *s;

va_start(valist, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", (char)va_arg(valist, int));
j = 1;
break;
case 'i':
printf("%i", va_arg(valist, int));
j = 1;
break;
case 'f':
printf("%f", (float)va_arg(valist, double));
j = 1;
break;
case 's':
s = va_arg(valist, char *);
if (s == NULL)
{
printf("(nil)");
j = 1;
break;
}
printf("%s", s);
j = 1;
break;
}
if (format[i + 1] != 0 && j == 1)
printf(", ");
i++;
j = 0;
}
va_end(valist);
printf("\n");
}
