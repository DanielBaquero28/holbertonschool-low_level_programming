#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the mun of coins
 * @argc: number of arguments
 * @argv: array of pointers to the strings (arguments)
 * Return: 0
**/

int main(int argc, char *argv[])
{
int cents;
int num = 0;

if (argc ==  1)
{
printf("Error\n");
return (1);
}
else if (argc > 1)
{
cents = atoi(argv[1]);
if (cents >= 25)
{
num += cents / 25;
cents %= 25;
}
if (cents >= 10)
{
num += cents / 10;
cents %= 10;
}
if (cents >= 5)
{
num += cents / 5;
cents %= 5;
}
if (cents >= 2)
{
num += cents / 2;
cents %= 2;
}
if (cents >= 1)
{
num += cents / 1;
cents %= 1;
}
printf("%d\n", num);
}
return (0);
}
