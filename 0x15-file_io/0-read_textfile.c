#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the file name
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 *         0 if the file cannot be opened or read, filename is NULL,
 *         or if write fails to write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t read_bytes;
	char *buffer;
	ssize_t written_bytes;

	buffer = malloc(sizeof(char) * letters);

	if (!filename || !buffer)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read_bytes = read(fd, buffer, letters);

	if (read_bytes == -1)
	{
		close(fd);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (written_bytes == -1)
	{
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (written_bytes);
}
