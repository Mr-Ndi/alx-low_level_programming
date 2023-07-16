#include<stdio.h>

/** main -prints "and that piece of art is useful"  - Dora Korpar, 2015-10-19"
 * following by a new line to standard error.
 * return: always 1.
 */


int main(void)

{
	write(2,"and that piece of art is useful\"  - Dora Korpar, 2015-10-19\n",59);
	return(1);
