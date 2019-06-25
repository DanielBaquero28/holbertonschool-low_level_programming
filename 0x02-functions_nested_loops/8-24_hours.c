#include <stdio.h>
#include "holberton.h"
/**
 * jack_bauer - Entry point
 *
 * Return: 0
 **/

void jack_bauer(void)
{
int mins;
int hours;

for (hours = 0; hours <= 23; hours++)
{
for (mins = 0; mins <= 59; mins++)
{
_putchar((hours / 10) + '0');
_putchar((hours % 10) + '0');
_putchar(':');
_putchar((mins / 10) + '0');
_putchar((mins % 10) + '0');
_putchar('\n');
}
}
}
