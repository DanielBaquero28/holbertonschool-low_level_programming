# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: A text
**/

int main(void)
{

int i = 0;
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
char letterLook;

while (i < 26)
{
letterLook = alphabet[i];
if (i == 4 || i == 16)
{
i++;
}
else
{
putchar(letterLook);
i++;
}
}
putchar('\n');

return (0);
}
