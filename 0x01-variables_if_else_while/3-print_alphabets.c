# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: A text
**/

int main(void)
{
int i;
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWYZ";
char letterLook;

i = 0;

while (i < 52)
{
letterLook = alphabet[i];
putchar(letterLook);
i++;
}
putchar ('\n');

return (0);
}
