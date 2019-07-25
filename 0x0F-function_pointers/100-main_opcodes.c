#include <stdio.h>
#include <stdlib.h>

/**
 * show_rep - Show rep
 * @s: Start of rep
 * @n: Number of bytes
**/

void show_rep(char *s, int n)
{

int i;

for (i = 0; i < n; i++)
{
printf("%02hhx", s[i]);
if (i < n - 1)
printf(" ");
else
printf("\n");
}
}

/**
 * main - Prints the opcodes of the main function
 * @argc: Number of arguments.
 * @argv: Argument vector.
 * Return: 0
**/

int main(int argc, char **argv)
{

int num;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
num = atoi(argv[1]);
if (num < 0)
{
printf("Error\n");
exit(2);
}
show_rep((char *)&main, num);
return (0);
}
