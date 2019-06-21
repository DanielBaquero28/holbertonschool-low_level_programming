#include <stdio.h>

/**
 * main - prints all possible combinations of three digit numbers.
 * Return: 0
**/
int main(void)
{
int c;
int c2;
int c3;

for (c = '0'; c <= '7'; c++)
{
for (c2 = '0'; c2 <= '8'; c2++)
{
for (c3 = '0'; c3 <= '9'; c3++)
{
if (c3 > c2 && c3 > c && c2 > c)
{
putchar(c);
putchar(c2);
putchar(c3);
if (c != '7' || c2 != '8' || c3 != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar(10);
return (0);
}
