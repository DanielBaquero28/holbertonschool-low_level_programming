#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the program name.
 * @argc: Number of commmand arguments
 * @argv: Array of strings of the size of argc
 * Return: 0
**/

int main(int argc, char *argv[])
{
  int i;
  for (i = 0; i < argc; i++)
    {
      printf("%s\n", argv[i]);
    }
  return(0);
}

