#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file
 * @filename: Name of file.
 * @letters: Number of letters to read.
 *
 * Return: Returns the file text.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffMemory;
	ssize_t openFile, readFile, writeFile;

	if (filename == NULL)
		return (0);

	buffMemory = malloc(sizeof(char) * letters);
	if (buffMemory == NULL)
		return (0);

	openFile = open(filename, O_RDONLY);
	readFile = read(openFile, buffMemory, letters);
	writeFile = write(STDOUT_FILENO, buffMemory, readFile);

	if (openFile == -1 || readFile == -1 || writeFile == -1 || writeFile != readFile)
	{
		free(buffMemory);
		return (0);
	}

	free(buffMemory);
	close(openFile);

	return (writeFile);
}
