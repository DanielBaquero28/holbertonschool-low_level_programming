#include "holberton.h"

/**
 * _atoi - Will print a string in reverse
 * @s: The pointer where the characters will be converted into integers
 *
 * Return: Nothing
**/

int _atoi(char *s)
{

char a[100];
int n;
 
printf("Input a valid string to convert to integer\n");
scanf("%s", a);
 
n = toString(a);
 
printf("String  = %s\nInteger = %d\n", a, n);
 
return 0;
}
