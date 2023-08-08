# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * alloc_grid - eturns a pointer to a 2 dimensional array of integers
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: NULL If width or height is 0 or negative
 * otherwise return a pointer to a 2 dimensional
 * array of integers
 */

int **alloc_grid(int width, int height)
{
int **grid;
int i, j, k, l;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
free(grid);
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = i; j >= 0; j--)
free(grid[j]);

free(grid);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
{
grid[k][l] = 0;
}
}
return (grid);
}
