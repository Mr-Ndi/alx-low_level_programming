# include "main.h"
/**
 * binary_to_uint - function to convert a binary into a number
 * @b: a pointer to the binary string
 *
 * Return:NULL if b isn't '0' or '1'. otherwise the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int q;
	unsigned int w = 0;

	if (!b)
		return (0);
	for (q = 0; b[q]; q++)
	{
		if (b[q] < '0' || b[q] > '1')
			return (0);
		w = 2 * w + (b[q] - '0');
	}
	return (w);
}
