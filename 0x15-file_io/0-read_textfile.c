#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and returns it to POSIX stdout.
 * @filename: Points to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, read_file, write_file;
	char *the_buffer;

	if (filename == NULL)
		return (0);

	the_buffer = malloc(sizeof(char) * letters);
	if (the_buffer == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	read_file = read(open_file, the_buffer, letters);
	write_file = write(STDOUT_FILENO, the_buffer, r);

	if (open_file == -1 || read_file == -1 || write_file == -1 || write_file != read_file)
	{
		free(the_buffer);
		return (0);
	}

	free(the_buffer);
	close(open_file);

	return (write_file);
}
