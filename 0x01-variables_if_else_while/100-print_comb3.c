#include<stdio.h>
/**
 * main -Entry point
 * Return: alwaays 0.
 */
int main(void)
{
int a = '0';
int x = '0';
int z = '0';

while (a < '7')
{
while (x < '8')
{
while (z < '9')
{
if (a < x && x < z)
{
putchar(a);
putchar(x);
putchar(z);
if (!(a == '7' && x == '8' && z == '9'))
{
putchar(',');
putchar(' ');
}
}
z++;
}
z = '0';
x++;
}
x = '0';
a++;
}
putchar('\n');
return (0);
}
