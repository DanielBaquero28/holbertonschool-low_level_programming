#include "holberton.h"

/**
 * print_rev - Will print a string in reverse
 * @s: The pointer that will be printed in reverse
 *
 * Return: Nothing
**/
void puts_half(char *str)
{
int str_size = strlen(str);
int i; 
int part_size;
int word;

for (i = 0; str[i] < 10; i++)
{
part_size = str_size / 2;
for (i = 0; i < str_size; i++) 
{ 
if (i % part_size == 0)
{
word = str[i];
_putchar(word);    
}
_putchar(10);
}
}
}
