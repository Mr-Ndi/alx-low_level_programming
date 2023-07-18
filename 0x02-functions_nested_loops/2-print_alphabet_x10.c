#include "main.h"

/**
 * main -Entry point
 * Return: always 0.
 * print_aphabet_x10 - print alphabets ten times
 */

void print_alphabet_x10(void)
{
char c;
int i = 0;

while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
