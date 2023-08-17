#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - fuction to add all parameters provided
 * @n: number of parameters
 * @..: continous parameter
 *
 * Return: sum if there is parameter otherwise zero
 */

int sum_them_all(const unsigned int n, ...)
{
va_list poli;

unsigned int po, sum = 0;

if (n == 0)
return (0);

va_start(poli, n);

for (po = 0; po < n; po++)
{
sum += va_arg(poli, int);
}

va_end(poli);
return (sum);
}
