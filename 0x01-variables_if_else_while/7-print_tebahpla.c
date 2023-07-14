#include<stdio.h>
/**
 * main -Entry point
 * Return: always 0
 */
int main(void)
{
int k = 122;

while (k >= 97)
{
putchar(k);
k--;
}
putchar('\n');
return (0);
}
