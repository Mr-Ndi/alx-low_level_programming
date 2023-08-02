#include "main.h"

/**
 * _strlen_recursion - a function to return string length
 * @s : a string to find its length
 *
 * Return : length of character.
 */
int _strlen_recursion(char *s)
	{
		if (*s == '\0')
			return (0);
		return (1 + _strlen_recursion(s + 1));
	}
