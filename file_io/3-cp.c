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
		exit(97);
		dprintf(2, "Usage: cp file_from file_to");
	}

	/* calls the cp function */
	copy_file(argv[1], argv[2]);

	return (0);
}

/**
 * copy_file - copies content
 * Description: copies the content of a file to another
 * @file_from: pointer to the source file
 * @file_to: pointer to the destination file
 * Return: 0
 */
int copy_file(const char *file_from, const char *file_to)
{
	int open_file_from, open_file_to, copied_file, read_file_from;
	int *buf;

	/* Handles absence of file_from */
	if (file_from == NULL)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from %s", file_from);
	}

	/* Creates or truncates file_to */
	open_file_to = open(file_to, O_CREAT | O_RDONLY | O_TRUNC, 0664);

	/* Handles failure of file_to creation */
	if (open_file_to == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
	}

	/* Creates a buffer to read 1024 at a time */
	buf = malloc(1024);
	if (buf == NULL)
		return (-1);

	/* Open and read file_from */
	open_file_from = open(file_from, O_RDONLY, 0664);
	read_file_from = read(open_file_from, buf, 1024);
	if (read_file_from == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from %s", file_from);
	}

	/* Copy file1 to file2 */
	while (read_file_from)
	{
		copied_file = write(open_file_to, buf, 1024);
		if (copied_file == -1)
		{
			exit(99);
			dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		}
	}

	close(open_file_from);
	close(open_file_to);
	if (close(open_file_from) == -1 || close(open_file_to) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Can't close fd %d\n", open_file_from);
	}
	return (0);
}
