#include "main.h"

/**
 * @void _print_rev_recursion(char *s); : a function to print a string in reverse
 * @s : a string to be reversed
 */
void _print_rev_recursion(char *s)
	{
		if (*s == '\0')
		{
			return;
		}
		{
		_print_rev_recursion(s + 1);
		 _putchar(*s);
		}
	}
