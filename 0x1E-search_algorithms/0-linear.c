#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array.
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: -1 if value is not present in array or if array is NULL
 *			otherwise first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
