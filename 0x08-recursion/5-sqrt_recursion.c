# include "main.h"

/**
 * @_sqrt_recursion(int n) : a function to calculate the square root
 * @n : a number to generate its square root
 *
 * Return : -1 if n has no natural sqrt otherwise sqrt on n
 */
int _sqrt_friend(int n, int x);
int _sqrt_recursion(int n)
	{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_friend(n, 0));
	}
/**
 * @_sqrt_friend(int n, int x):  a function to calculate the square root
 * @n : number to generate its square root
 * @x : number that we assume as square root
 */

int _sqrt_friend(int n, int x)
	{
	if (x * x == n)
		return (n);
	else if (x * x > n)
		return (-1);
	else
		return (_sqrt_friend(n, x + 1));
	}
