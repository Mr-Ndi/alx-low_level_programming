# include "main.h"
# include <stdlib.h>
# include <stdio.h>

/**
 * free_grid - function that frees a 2 dimensional grid previous one
 * @grid: a grid from previous function
 * @height:height of aarray
 *
 * Return: heap
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
