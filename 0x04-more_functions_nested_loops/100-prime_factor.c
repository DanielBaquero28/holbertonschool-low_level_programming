#include <stdio.h>
#include <math.h>

/**
 * main - Principal Function
 *
 * Return: Always 0.
**/

int main(void)
{
long int n, i;

n = 612852475143;

for (i = 2; i < n; i++)
{
if (n % i == 0)
{
n /= i;
i--;
}
}
printf("%ld\n", n);
return (0);
}
