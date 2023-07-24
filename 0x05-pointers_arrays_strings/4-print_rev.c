#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int leng;
int a = 0, b;

while (s[a] != '\0')
{
a++;
}
leng = a - 1;
for (b = leng; b >= 0; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}
