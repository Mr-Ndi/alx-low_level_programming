#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - function to make binary search algorithm
 * @array: the array given to search from
 * @size: the size of the array
 * @value: value to search into the array
 * Return: -1 if not found or index of the found value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, left, right;

	left = 0, right = size - 1;
	if (array == NULL)
		return (-1);
	for (; left <= right;)
	{
		printf("Searching in array: ");
		for (middle = left; middle <= right; middle++)
		{
			printf("%d", array[middle]);
			if (middle < right)
				printf(", ");
		}
		printf("\n");

		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
