#include<stdio.h>
/**
 * main -entry point
 
 * return: always 0.(seccess)
 */
int main(void)
{
	printf("Size of a char :%zu byte(s)\n",sizeof(char));
	printf("Size of a int :%zu byte(s)\n",sizeof(int));
	printf("Size of a long :%zu byte(s)\n",sizeof(long));
	printf("Size of a long int :%zu byte(s)\n",sizeof(long int));
	printf("Size of a long long int :%zu byte(s)\n",sizeof(long long int));
	printf("Size of a float  :%zu byte(s)\n",sizeof(float));
	return(0);
}
