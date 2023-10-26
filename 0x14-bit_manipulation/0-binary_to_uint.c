# include <stdio.h>
# include "main.h"

/**
 * binary_to_uint - converts a binary number to an integer
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: if there is one or more chars in the string b that is not 0 or 1
 *	b is NULL returns 0. Otherwise the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		answer = answer * 2 + (*b - '0');
		b++;
	}
	return (answer);
}
