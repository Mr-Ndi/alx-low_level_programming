# include <stdio.h>
# include <stdlib.h>
# include "function_pointers.h"
# include "3-calc.h"
/**
 * main - main entry of a program
 * @argc: number of argument passed
 * @argv: array of passed argument
 *
 * Return: always zero
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int po, li;
char *ndi;

if (argc != 4)
{
printf("Error\n");
exit (98);
}
po = atoi(argv[1]);
li = atoi(argv[3]);
ndi = argv[2];

if (get_op_func(ndi) == NULL)
{
printf("Error\n");
exit(99);
}

if ((*ndi == '/' && li == 0) || (*ndi == '%' && po == 0))
{
printf("Error\n");
exit(98);
}
printf("%d\n", get_op_func(ndi)(po, li));
return (0);
}
