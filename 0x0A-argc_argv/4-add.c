# include <string.h>
# include <stdio.h>
# include "main.h"
# include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero if no argument, 1 for wrong input
 */

int main(int argc, char *argv[])
{
int s = 0, i;
size_t o;
char *d;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
d = argv[i];
for (o = 0; o < strlen(d); o++)
{
if (d[o] < '0' || d[o] > '9')
{
printf("Error\n");
return (1);
}
}
s += atoi(argv[i]);
}
printf("%d\n", s);
return (0);
}
