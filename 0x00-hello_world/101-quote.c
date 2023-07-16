#include <unistd.h>

/**
 * main - Entry point
 * Return: Always it must work
 */

int main(void)
{
	const char message[50];

	message[50] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int len = sizeof(message) - 1;

	write(STDERR_FILENO, message, len);

	return (1);
}
