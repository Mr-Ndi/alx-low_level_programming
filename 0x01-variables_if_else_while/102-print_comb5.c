#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
int q, w;

for (q = 0; q <= 99; q++)
{
for (w = q + 1; w <= 99; w++)
{
putchar(q / 10 + '0');
putchar(q % 10 + '0');
putchar(' ');
putchar(w / 10 + '0');
putchar(w % 10 + '0');
if (!(q == 98 && w == 99))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
