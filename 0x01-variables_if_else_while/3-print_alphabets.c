#include <stdio.h>

/**
 * main-Prints the alphabet 10 times!
 * Return: 0
**/

int main(void)
{
int i;
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char letter;

i = 0;
while (i < 52)
{
letter = alpha[i];
putchar(letter);
i++;
}
putchar('\n');
return (0);
}
