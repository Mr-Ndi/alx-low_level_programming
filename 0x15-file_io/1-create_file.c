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
	int a, b, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

	}
	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
	b = write(a, text_content, length);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
