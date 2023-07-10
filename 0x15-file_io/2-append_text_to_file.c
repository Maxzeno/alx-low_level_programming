#include "main.h"

/**
 * append_text_to_file - Appends text to file.
 * @filename: Name of file
 * @text_content: Content
 *
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfile, writefile, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	openfile = open(filename, O_WRONLY | O_APPEND);
	writefile = write(openfile, text_content, length);

	if (openfile == -1 || writefile == -1)
		return (-1);

	close(openfile);

	return (1);
}
