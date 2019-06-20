#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints out a random number and sees
 * whether the last digit is greater than 5
 * or less than 6 but not 0
 * Return: 0
**/

int main(void)
{
int n;
int lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;

if (lastdigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
}
else if (lastdigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastdigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
return (0);
}
