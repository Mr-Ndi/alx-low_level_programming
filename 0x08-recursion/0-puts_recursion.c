#include "main.h"

/**
 * @void _puts_recursion(char *s);: returns a string followed by new line
 * @s : a string to be printed
 */
void _puts_recursion(char *s)
	{
		if (*s == '\0')
		{
			_putchar ('\n');
			return;
		}
		_putchar (*s);
		_puts_recursion (s + 1);
	}
