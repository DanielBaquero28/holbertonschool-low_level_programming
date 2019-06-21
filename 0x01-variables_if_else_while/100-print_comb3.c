#include <stdio.h>

/**
 * main - Entry point, where prints all possible combinations of two digits
 *
 * Return: 0
**/

int main(void)
{
int a;
int a2;

for (a = '0'; a <= '9'; a++)
{
for (a2 = '0'; a <= '9'; a2++)
{
if (a2 != a && a2 > a)
{
putchar(a);
putchar(a2);
}
if (a != '8' || a2 != '9')
{
putchar(',');
putchar(' ');
}
return (0);
}
}
}
