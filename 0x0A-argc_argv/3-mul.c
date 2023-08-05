# include <stdlib.h>
# include <stdio.h>
# include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: zero if succesful otherwise 1
 */

int main(int argc, char *argv[])
{
int p = 1;

if (argc > 2)
{
p = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", p);
}
else
{
printf("Error\n");
}
return (0);
}
