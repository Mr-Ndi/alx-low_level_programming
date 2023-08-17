# include "variadic_functions.h"
# include <stdarg.h>
# include <stdio.h>

/**
 * print_numbers - print the number sepatated by separator
 * @separator: a string to separate number
 * @n: number of paremeter to print separated by separator
 *
 * Return: number separated by separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int nb;

va_start(num, n);

for (nb = 0; nb < n; nb++)
{
printf("%d", va_arg(num, int));
if (nb != n - 1)
{
if (separator != NULL)
{
printf("%s", separator);
}
}
}
va_end(num);
printf("\n");
}
