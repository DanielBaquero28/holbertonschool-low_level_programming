#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - Reallocates a block of memory from the old_size to new_size
 * @ptr: Pointer to previous block of memory
 * @old_size: Old block of memory
 * @new_size: New block of memory 
 * Return: NULL or pointer to new block of memory
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr
  if (ptr == NULL)
    {
    new_ptr = malloc(new_size);
 free(ptr);
 return (NULL);
    }
 free(ptr);
 return (new_ptr);
 if (new_size == old_size)
   return (ptr);
 if(new_size == 0 && ptr != NULL)
   {
   free(ptr);
 return (NULL);
   }
 new_ptr = malloc(new_size);
 if (ptr == NULL)
   {
     free(ptr);
   return (NULL);
   }
 if (new_size > old_size)
   _memcpy(new_ptr, ptr, old_size);
 free(ptr);
 return(new_ptr);
   }