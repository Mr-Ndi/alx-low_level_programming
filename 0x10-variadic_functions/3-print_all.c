#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - fn to print any kind of argment
 * @format: the thye list of argmentss
 * @...: the continuity of argments
 */
void print_all(const char * const format, ...)
{
int a = 0;
char *s, *sep = "";

va_list list;

va_start(list, format);

if (format)
{
while (format[a])
{
switch (format[a])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
s = va_arg(list, char *);
if (!s)
s = "(nil)";
printf("%s%s", sep, s);
break;
default:
a++;
continue;

}
sep = ", ";
a++;

}
}
printf("\n");
va_end(list);
}
