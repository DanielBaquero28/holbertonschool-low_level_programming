#ifndef SEARCH_ALGORITHMS_H
#define SEARCH_ALGORITHMS_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
