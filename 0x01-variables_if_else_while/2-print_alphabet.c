# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: A text
**/

int main(void)
{
int i;
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
char letterLook;

while (i < 26)
{
letterLook = alphabet[i];
putchar(letterLook);
i++;
}
putchar ('\n');

return (0);
}
