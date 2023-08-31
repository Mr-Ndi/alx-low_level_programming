# include "main.h"
/**
 * flip_bits - a function to returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;

	unsigned int a = 0;

	while (result > 0)
	{
		if (result & 1)
			a++;
		result >>= 1;
	}
	return (a);
}
