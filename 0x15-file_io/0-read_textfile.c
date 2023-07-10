#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file.
 * @filename: Name of file
 * @letters: Number of letters to read
 *
 * Return: Returns the file text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t openfile, readfile, writefile;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	openfile = open(filename, O_RDONLY);
	readfile = read(openfile, buff, letters);
	writefile = write(STDOUT_FILENO, buff, readfile);

	if (openfile == -1 || readfile == -1 || writefile == -1 || writefile != readfile)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(openfile);

	return (writefile);
}
