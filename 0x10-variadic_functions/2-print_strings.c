# include "variadic_functions.h"
# include <stdio.h>
# include <stdarg.h>

/**
 * print_strings - a funcion to print string in separated form
 * @separator: a string to separate the input string
 * @n: number of string passed to the function
 *
 * Return: (nil) If one of the string is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int p;
char *str;

va_start(strings, n);
for (p = 0; p < n; p++)
{
str = va_arg(strings, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if ((p != n - 1) && (separator != NULL))
{
printf("%s", separator);
}
}
va_end(strings);
printf("\n");
}
