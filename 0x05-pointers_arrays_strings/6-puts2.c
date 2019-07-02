#include "holberton.h"

/**
 * puts2 - Prints one char out of 2 of a string
 * @str: The pointer that will be printed in reverse
 *
 * Return: Nothing
**/

void puts2(char *str)
{
int i;
char numbers;

for (i = 0; str[i] != 0; i++)
{
if (i % 2 == 0)
{
numbers = str[i];
_putchar(numbers);
}
}
_putchar(10);
}
