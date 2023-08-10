# include <stdio.h>
# include <stdlib.h>
# include "main.h"
# include <string.h>

/**
 * _realloc - a function that reallocates a memory block.
 * @ptr: ointer to the memory block previously allocated
 * @old_size: the size of the previously allocated memory block
 * @new_size: the desired new size for the memory block
 *
 * Return: Null if ptr or new_size is zero otherwise
 * reallocates a memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *prt;

if (ptr == NULL)
{
return (malloc(new_size));
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (old_size == new_size)
{
return (ptr);
}
prt = malloc(new_size);

if (prt == NULL)
{
return (NULL);
}
if (new_size > old_size)
{
memcpy(prt, ptr, old_size);
}

else
{
memcpy(prt, ptr, new_size);
}
free(ptr);
return (prt);
}
