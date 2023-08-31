# include "main.h"

/**
 * get_bit - a function to returns the value of a bit at a given index
 * @n: the number of bit to deduct from a bit
 * @index:an index of bit to get
 *
 * Return: -1 if an error occured otherwise the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
