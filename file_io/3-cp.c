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
	copy_file1_file2(argv[1], argv[2]);

	return (0);
}

/**
 * copy_file - copies content
 * Description: copies the content of a file to another
 * @file1: pointer to the file1
 * @file2: pointer to the file2
 * Return: 0
 */
int copy_file1_file2(const char *file1, const char *file2)
{
	int open_file1, open_file2, copied_file;
	int *buf;
	ssize_t r;

	/* Handles absence of file1 */
	if (file1 == NULL)
	{
		exit(98);
		dprintf(2, "Error: Can't read from %s", file1);
	}

	/* Creates a buffer to read 1024 at a time */
	buf = malloc(1024);
	if (buf == NULL)
	{
		free(buf);
		return (-1);
	}

	/* Open destination file2 */
	open_file1 = open(file2, O_CREAT | O_RDONLY | O_TRUNC, 0664);

	/* Handles open failure */
	if (open_file1 == -1)
	{
		exit(99);
		dprintf(2, "Error: Can't write to %s", file2);
	}

	open_file2 = open(file1, O_RDONLY, 0664);
	r = read(open_file2, buf, 1024);

	while (r)
	{
		copied_file = write(open_file2, buf, 1024);
		if (copied_file == -1)
		{
			exit(99);
			dprintf(2, "Error: Can't write to %s", file2);
		}
	}

	close(open_file1);
	close(open_file2);
	/* if (close == -1)
	{
		exit(100);
		dprintf(2, "Can't close fd %d\n", 
	}*/
	return (0);
}
