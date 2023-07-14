#include<stdio.h>
/**
 * main -Entry point
 * Return: alwaays 0.
 */
int main(void)
{
int g = 97;
while (g <= 122)
{
if (g == 101 || g == 113)
{
g++;
continue;
}
putchar(g);
g++;
}
putchar('\n');
return (0);
}
