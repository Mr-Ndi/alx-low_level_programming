# include "main.h"
/**
 * get_endianness - a function to checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int number = 1;
	char *b = (char *)&number;

	if (*b)
		return (1);
	else
		return (0);
}
