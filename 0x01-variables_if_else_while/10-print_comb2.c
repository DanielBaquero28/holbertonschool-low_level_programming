#include <stdio.h>

/**
 * main - Entry point 
 * Return: 0
**/

int main(void)
{
int pri;
int ult;
pri = 48;
ult = 48;
while (pri < 58)
{
while (ult < 58)
{
putchar(pri);
putchar(ult);
if (pri != 57 ||  ult != 57)
{
putchar(44);
putchar(32);
}
ult++;

}
ult = 48;
pri++;
}
putchar('\n');
return (0);
}
