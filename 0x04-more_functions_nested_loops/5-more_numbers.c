#include "holberton.h"

/**
 * more_numbers - print numbrs 0 to 14 0 times
 *
 * Return: nothing
 */

void more_numbers(void)
{
int i, rows;

for (i = 0; i < 10; i++)
{
for (rows = 0; rows < 15; rows++)
{
if (rows > 9)
_putchar((rows / 10) + '0');
_putchar((rows % 10) + '0');
}
_putchar('\n');
}
}
