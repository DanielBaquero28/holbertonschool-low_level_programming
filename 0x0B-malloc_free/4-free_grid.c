#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - Duplicates a string to a newly allocated space in memory.
 * @grid : Grid
 * @height : Height
 * Return: NULL or pointer.
**/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
