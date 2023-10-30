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
    int fd;
    char *buf;
    ssize_t n_read, n_written;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (buf == NULL)
    {
        close(fd);
        return (0);
    }

    n_read = read(fd, buf, letters);
    if (n_read == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    n_written = write(1, buf, n_read);

    free(buf);
    close(fd);

    if (n_written == n_read)
        return n_written;
    else
        return (0);
}

