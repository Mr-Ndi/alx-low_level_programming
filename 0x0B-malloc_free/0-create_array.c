# include "main.h"
# include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of created array
 * @c: character to be passed into arraiy
 *
 * Return: NULL if the size is 0
 * otherwise return array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
{
return (NULL);
}
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
