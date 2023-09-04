# include "main.h"
# include <stdlib.h>
# include <string.h>
/**
 * create_file - a function to create a file
 * @filename: name of file to create or edit
 * @text_content: file content
 *
 * Return: -1 if the program fails or 1 if succesful
 */

int create_file(const char *filename, char *text_content)
{
	int a, b;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (0);
	a = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (a == -1)
		return (-1);
	if (text_content != NULL)
	{
		b = write(a, text_content, strlen(text_content));
		if (b == -1)
		{
			close(a);
			return (-1);
		}
	}
	close(a);
	return (-1);
}
