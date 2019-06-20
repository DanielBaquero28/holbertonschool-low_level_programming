#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: A text
**/

int main(void)
{
int i = 0;
char singled [10] = "0123456789";
char numberLook;
while (i < 9)
{
numberLook = singled[i];
putchar(numberLook);
i++;
}
putchar('\n');

return (0);
}
