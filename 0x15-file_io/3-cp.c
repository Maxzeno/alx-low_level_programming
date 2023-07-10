#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Create.
 * @file: File.
 *
 * Return: Returns a pointer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes file.
 * @fd: The file descriptor that will be closed.
 */
void close_file(int fd)
{
	int closefile;

	closefile = close(fd);

	if (closefile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies a file to another file.
 * @argc: The number of args supplied to the program.
 * @argv: An array of pointers to the args.
 *
 * Return: 0 on success.
 *
 * Description: Occures only if the arg count is incorrect - exit code 97.
 *              Occures only if file_from does not exist or cannot be read - exit code 98.
 *              Occures only if file_to cannot be created or written to - exit code 99.
 *              Occures only if file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fromfile, to, readfile, writefile;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	fromfile = open(argv[1], O_RDONLY);
	readfile = read(fromfile, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromfile == -1 || readfile == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		writefile = write(to, buff, readfile);
		if (to == -1 || writefile == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		readfile = read(fromfile, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (readfile > 0);

	free(buff);
	close_file(fromfile);
	close_file(to);

	return (0);
}
