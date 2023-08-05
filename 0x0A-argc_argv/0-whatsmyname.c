# include <stdio.h>
# include "main.h"

/**
 * main - prints its name, followed by a new line.
 * @argc: argument counter
 * @argv: argument vctor
 *
 * Return: always zero
 */

int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
