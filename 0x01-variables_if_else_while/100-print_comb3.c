#include <stdio.h>

/**
 * main - Entry point, where prints all possible combinations of two digits
 *
 * Return: 0
**/

int main(void)
{
int n;
int i;

for (n = '0'; n <= '9'; n++)
{
for (i = '0'; i <= '9'; i++)
{
int a = n + n;
int x = n + i;
if (x > a)
{
putchar(n);
putchar(i);
if (!(n == '8' && i == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
