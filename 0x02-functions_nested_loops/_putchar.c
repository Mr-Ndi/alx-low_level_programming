#include <unistd.h>
/**
 * putchar - write the character c to stdout
 * oc the character to print
 * Return: on succes 1
 * on error, -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
