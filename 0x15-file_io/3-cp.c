#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_buffer - function to create the buffer
 *
 * @file: the filename to proceed
 *
 * Return: buffer string
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file- function to close the file if possible
 * @m: the integer for the discriptor
 *
 */
void close_file(int m)
{
	int a;

	a = close(m);


	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", m);
		exit(100);
	}
}
/**
 * main - the main entry of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int source, destin, a, b;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	a = read(source, buffer, 1024);

	destin = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (a > 0)
	{
		if (source == -1 || a == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		b = write(destin, buffer, a);

		if (destin  == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		a = read(source, buffer, 1024);
		destin = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(source);
	close_file(destin);


	return (0);
}
