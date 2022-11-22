#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: checks the number of arguments passed
 *				and call cp()
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/* Checks number of arguments passed */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* calls the cp function */
	copy_file(argv[1], argv[2]);

	return (0);
}

/**
 * use_buffer - creates a buffer
 * Description: creates a file buffer
 * @file: pointer to a file
 * Return: buffer
 */
/*char *use_buffer(char *file)
{
	char *buf;

	buf = malloc(1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}*/

/**
 * copy_file - copies content
 * Description: copies the content of a file to another
 * @file_from: pointer to the source file
 * @file_to: pointer to the destination file
 * Return: 0
 */
int copy_file(char *file_from, char *file_to)
{
	int open_file_from, open_file_to, read_file_from;
	char buf[1024];

	/* Handles absence of file_from */
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		exit(98);
	}

	/* Creates or truncates file_to */
	open_file_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* Creates a buffer to read 1024 bytes at a time */
	/*buf = use_buffer(file_from);*/

	/* Open and read file_from */
	open_file_from = open(file_from, O_RDONLY);
	read_file_from = read(open_file_from, buf, 1024);
	if (open_file_from == -1 || read_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		free(buf);
		exit(98);
	}
	/* Copy file1 to file2 */
	while (read_file_from > 0)
	{
		if (open_file_to == -1 || (write(open_file_to, buf, read_file_from) == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buf);
			exit(99);
		}
	}
	free(buf);
	/* Close the opened files and handles their closing*/
	closing(open_file_from);
	closing(open_file_to);
	return (0);
}

/**
 * closing - handles close file
 * Description: Handles file closure error
 * @file: file to close
 * Return: 0
 */
void closing(int file)
{
	int close_file = close(file);

	if (close_file == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Can't close fd %d\n", file);
	}
}
