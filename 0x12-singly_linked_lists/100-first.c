#include <stdio.h>

void print_msg(void) __attribute__ ((constructor));

/**
 * print_msg - Prints a message before the main function.
**/

void print_msg(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
