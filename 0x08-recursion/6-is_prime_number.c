#include "main.h"

/**
 * int is_prime_number(int n): function to test the prime nbrs
 * @n : number to be evaluated
 *
 * Return : 1 if nbr is prime or 0 0therwise
 */
int is_prime_fri(int n, int i);
int is_prime_number(int n)
	{
	if (n <= 1)
		return (0);
	else if (n <=3)
		return (1);
	else
		return (is_prime_fri(n, 2));
	}
/**
 * is_prime_fri(int n, int i): function to test the prime nbrs
 *  @n: The number to check.
 *  @i: The divisor to check.
 *
 *  Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_fri(int n, int i)
	{
	if (i >=n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime_fri(n, i + 1));
	}
