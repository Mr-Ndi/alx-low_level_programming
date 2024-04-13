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
	size_t start, end, i;

	start = 0;
	end = sqrt(size);
	while (array[start] < value && start < size)
	{
		start += end;
		end += sqrt(size);
	}
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%lu] = [%u]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
