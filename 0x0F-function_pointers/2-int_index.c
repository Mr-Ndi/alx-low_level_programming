# include <stddef.h>
# include "function_pointers.h"

/**
 * int_index - a function to search for integer
 * @size: the number of elements in the array
 * @cmp: a pointer to the function used to compare values
 * @array: array contains poiner
 *
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int po;

if (array == NULL || cmp == NULL)
	return (-1);
for (po = 0; po < size; po++)
{
if (cmp(array[po]))
return (po);
}
return (-1);
}
