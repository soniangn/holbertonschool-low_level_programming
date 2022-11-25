#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: checks the number of arguments passed
 *                              and call cp()
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

	if (argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
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
int copy_file(char *file_from, char *file_to)
{
	int open_file_from, open_file_to, read_file_from, copied_file;
	char buf[1024];

	/* Creates or truncates file_to */
	open_file_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (open_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
		exit(98);
	}
	/* Open and read file_from */
	open_file_from = open(file_from, O_RDONLY);
	if (file_from == NULL || open_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	/* Copy file1 to file2 */
	read_file_from = 1;
	while (read_file_from > 0)
	{
		read_file_from = read(open_file_from, buf, 1024);
		if (read_file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		copied_file = write(open_file_to, buf, read_file_from);
		if (copied_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	closing(open_file_to);
	closing(open_file_from);
	return (0);
}

/**
 * closing - handles files closing
 * Decription: Close the opened files and handles their closing
 * @file: file to close
 * Return: 0
 */
void closing(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd");
		exit(100);
	}
}
