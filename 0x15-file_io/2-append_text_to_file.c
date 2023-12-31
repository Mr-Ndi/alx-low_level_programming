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
	ssize_t fd;
	int i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	while (text_content[i])
	{
		if (write(fd, &text_content[i], 1) == -1)
		{
			close(fd);
			return (-1);
		}
		i++;
	}

	close(fd);

	return (1);
}
