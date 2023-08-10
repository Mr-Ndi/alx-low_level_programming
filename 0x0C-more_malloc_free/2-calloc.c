# include "main.h"
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of element in array
 * @size: size of each element
 *
 * Return: Null If nmemb or size is 0. otherwise
 * allocates memory for an array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *tr;
if (nmemb == 0 || size == 0)
return (NULL);

tr = malloc(nmemb * size);
if (tr == NULL)
return (NULL);

memset(tr, 0, nmemb * size);

return (tr);
}
