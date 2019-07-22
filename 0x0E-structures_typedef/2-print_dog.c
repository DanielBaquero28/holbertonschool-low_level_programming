#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints variable of type struct dog
 * @d: Pointer
 * Return: Nothing
**/

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if ((*d).name == NULL)
printf("Name: (nil)\n");
else 
printf("Name: %s\n", (*d).name);
if ((*d).age == NULL)
printf("Age: (nil)\n");
else
printf("Age: %d\n", (*d).age);
if ((*d).owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s", (*d).owner);
}
