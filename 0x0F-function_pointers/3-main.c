#include "3-calc.h"

/**
 * main - Prints the calculation.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 98, 99, 100, or correct calculation.
 **/
int main(int argc, char **argv)
{
int result;
int arg1 = 0;
int arg2 = 0;
int (*ptr)(int, int);
char operator;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
arg1 = atoi(argv[1]);
arg2 = atoi(argv[3]);
operator = argv[2][0];
if ((argv[2][0] == '/' || argv[2][0] == '%') && arg2 == 0)
{
printf("Error\n");
exit(100);
}
if ((operator != '*' && operator != '+' && operator != '-'
&& operator != '/'  && operator != '%') || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
ptr = get_op_func(argv[2]);
result = (*ptr)(a, b);
printf("%d\n", result);
return (0);
}
