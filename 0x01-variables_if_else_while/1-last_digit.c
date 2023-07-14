#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int k;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if(k > 5)
	{
	printf("the last digit of %d  is %d and is greater than 5",n,k);
	}
	else if (k == 0)
	{
	printf("the last digit of %d is %d ",n,k);
	}
	else
	{
	printf("the last digit of %d is %d and is less than 6 and not 0");
	}
	return (0);
}
