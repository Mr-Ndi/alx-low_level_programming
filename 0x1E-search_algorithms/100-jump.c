#include <math.h>
#include "search_algos.h"
/**
 * jump_search - function that searches for a value in a sorted array.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value:  is the value to search for.
 * Return: index of value otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, intambwe, i;

	if (!array || size == 0)
		return (-1);

	intambwe = sqrt(size);
	for (start = 0; array[start] < value && start < size; start++)
	{
		printf("Value checked array[%lu] = [%u]\n", i, array[i]);
		i = start;
		start += intambwe;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, start);
	start = start < size - 1 ? start : size - 1;
	for (i = 0; i < start && array[i] < value; i++)
		printf("Value checked array[%lu] = [%u]\n", i, array[i]);
	printf("Value checked array[%lu] = [%u]\n", i, array[i]);
	return (array[i] == value ? (int)i : -1);
}
