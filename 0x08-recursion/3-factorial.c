# include "main.h"

/**
 * @factorial(int n) : a fuction to show the factorial of a number
 * @n the number to find its factorial
 */

int factorial(int n)
	{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial (n - 1));
	}
