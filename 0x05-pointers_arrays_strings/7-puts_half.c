#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
int len, n, k;

len = 0;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
k = len / 2;
}
else
{
k = (len - 1)/2;
}
for (n = k; n < len; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
