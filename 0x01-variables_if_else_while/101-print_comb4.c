#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
int q, w, e;

for (q = 0; q <= 7; q++)
{
for (w = q + 1; w <= 8; w++)
{
for (e = w + 1; e <= 9; e++)
{
putchar(q + '0');
putchar(w + '0');
putchar(e + '0');
if (!(q == 7 && w == 8 && e == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
