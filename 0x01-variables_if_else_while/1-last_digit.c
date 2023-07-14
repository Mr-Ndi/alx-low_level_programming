#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Get last digit of a number by
 * modulas and return answer depend on the.
 * last number example :
 * if the Last digit of a number is 5 the out put must be.
 * :is greater than 5
 * return : always zero
 */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if (k > 5)
	{
	printf("the last digit of %d  is %d and is greater than 5\n", n, k);
	}
	else if (k == 0)
	{
	printf("the last digit of %d is %d \n", n, k);
	}
	else
	{
	printf("the last digit of %d is %d and is less than 6 and not 0\n", n, k);
	}
	return (0);
}
