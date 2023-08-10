# include <stdio.h>
# include <stdlib.h>
# include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: Null if min > max, return otherwise
 * array of integers
 */

int *array_range(int min, int max)
{
unsigned int p, s;
int *poi;

if (min > max)
return (NULL);

s = max - min + 1;
poi = malloc(sizeof(int) * s);

if (poi == NULL)
return (NULL);

for (p = 0; p < s; p++)
{
poi[p] = min + p;
}
return (poi);
}
