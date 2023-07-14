#include<stdio.h>
/**
 * main - Entry point.
 * Return: always 0.
 */
int main(void)
{
int p = 65;
int k = 97;

while (k < 122)
{
putchar(k);
k++;
}
while (p < 90)
{
putchar(p);
p++;
}
putchar('\n');
return (0);
}
