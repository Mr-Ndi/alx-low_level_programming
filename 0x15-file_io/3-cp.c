#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, exit with code 97 to 100 on failure
 */


void printError1(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
  *printError2 - print error about the file_from (argv[1])
  *@c: string name of file
  *Return: nothing
  */
void printError2(char *c)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", c);
	exit(98);
}
/**
  *printError3 - print error about the file_to (argv[2])
  *@c: string name of file
  *Return: nothing
  */
void printError3(char *c)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", c);
	exit(99);
}

/**
  *printError4 - print error for close system call
  *@d: file descriptor
  *Return: nothing
  */
void printError4(int d)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
	exit(100);
}

/**
  *main - Entry point of hte program
  *@argc: argument count
  *@argv: argument vector
  *Return: nothing
  */

int main(int argc, char **argv)
{
	int fd, fd2, bytes_read;
	char buffer[1024];

	if (argc != 3)
		printError1();
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
		printError2(argv[1]);
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (fd2 == -1)
		printError3(argv[2]);
	while ((bytes_read = read(fd, buffer, 1024)) > 0)
	{
		if (write(fd2, buffer, bytes_read) == -1)
			printError3(argv[2]);
	}

	if (bytes_read == -1)
		printError2(argv[1]);

	if (close(fd) == -1)
		printError4(fd);
	if (close(fd2) == -1)
		printError4(fd2);
	return (0);
}
