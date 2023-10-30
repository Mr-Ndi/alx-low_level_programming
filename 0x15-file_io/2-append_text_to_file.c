#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, res_write, len;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        for (len = 0; text_content[len] != '\0'; len++)
            ;

        res_write = write(fd, text_content, len);
        if (res_write == -1)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
