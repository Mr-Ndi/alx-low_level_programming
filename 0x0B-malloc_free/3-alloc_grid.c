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
int i, j;

if (width <= 0 || height <= 0) {
return NULL;
}
for (i = 0; i < width; i++)
grid[i] = malloc(sizeof(int *) * height);
if (grid[i] == NULL)
{
for (j = 0; j < height; j++) {
grid[j] = malloc(sizeof(int) * width);
if (grid[j] == NULL)
free(grid[j]);
}
free(grid);
return (NULL);
}
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
