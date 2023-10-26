#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number
 * @num: The decimal number to print in binary
 */
void print_binary(unsigned long int num)
{
	int bit_position, count = 0;
	unsigned long int current_bit;

	for (bit_position = 63; bit_position >= 0; bit_position--)
	{
		current_bit = num >> bit_position;

		if (current_bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}

	if (!count)
		_putchar('0');
}
