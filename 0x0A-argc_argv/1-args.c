# include <stdio.h>
# include "main.h"

/**
 * main - prints the number of arguments passed into program
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);

return (0);
}
