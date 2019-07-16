#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - Creates a 2 dimensional arrays of integers.
 * @width: Width
 * @height: Height
 * Return: Pointer or NULL.
**/

int **alloc_grid(int width, int height)
{
int i, a, b, c; 
int **grid;

if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (c = 0; c < i; c++)
free(grid[c]);
free(grid);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
grid[a][b] = 0;
}
return (grid);
}
