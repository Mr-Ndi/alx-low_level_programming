#include <stdio.h>
/**
 * main -Entry point
 * Return: alwaays 0.
 */
int main(void)
{
int z;

for (z = 48; z <= 57; z++)
{
putchar(z);
if (z == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
