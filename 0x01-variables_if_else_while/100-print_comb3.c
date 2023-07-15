#include<stdio.h>
/**
 * main -Entry point
 * Return: alwaays 0.
 */
int main(void)
{
int p, k;

for (p = 0; p < 9; p++)
{
for (k = p + 1; k < 10; k++)
{
putchar((p % 10) + '0');
putchar((k % 10) + '0');
if (p == 8 && k == 9)
continue;
putchar(',');
putchar(' ');
}
}
return (0);
}
