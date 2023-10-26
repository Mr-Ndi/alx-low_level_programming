#include "main.h"
#include <unistd.h>
/**
 * _putchar - The character writes c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is return, and errno  set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
