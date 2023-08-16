# include <stddef.h>
# include "function_pointers.h"

/**
 * print_name - print the name using poiner to function
 * @name: name to print
 * @f: pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
