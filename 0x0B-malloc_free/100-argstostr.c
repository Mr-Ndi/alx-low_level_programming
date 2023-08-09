# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * argstostr - a function that concatenates all
 * the arguments of your program
 * @ac: argument count
 * @av:argument vector
 *
 * Return:  concatenated string
 */
char *argstostr(int ac, char **av)
{
int q = 0, w = 0, e = 0, r = 0;
char *y;

if (ac == 0 || av == NULL)
return (NULL);

while (w < ac)
{
while (av[w][e])
{
q++;
e++;
}
e = 0;
w++;
}
y = malloc(sizeof(char) * q + ac + 1);

w = 0;
while (av[w])
{
while (av[w][e])
{
y[r] = av[w][e];
r++;
e++;
}
y[r] = '\n';
e = 0;
w++;
r++;
}
r++;
y[r] = '\0';
return (y);
}
