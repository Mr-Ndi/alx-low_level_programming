# include "main.h"

/**
 * @_pow_recursion(int x, int y): a function to power y to x
 * @x: a number to be used
 * @y: a number to be raised on x
 *
 * Return final answer
 */

int _pow_recursion(int x, int y)
	{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y-1));
	}
