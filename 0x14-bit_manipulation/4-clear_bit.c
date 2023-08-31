# include "main.h"
/**
 * clear_bit - a function to sets the value of a bit to 0 at a given index.
 * @n: a pointer to the value to be updated
 * @index: an index of a bit to be replaced
 *
 * Return:1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int ) * 8)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
