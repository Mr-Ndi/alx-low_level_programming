# include <stddef.h>
# include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @size: an array size
 * @action: pointer to the funcion to use
 * @array: array to be printed
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int poli;
if (array == NULL || action == NULL)
	return;
for (poli = 0; poli < size; poli++)
action(array[poli]);
}
