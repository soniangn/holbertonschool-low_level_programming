#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - entry point
 * Description: reads a text file and prints it to the POSIX
 *				standard output
 * @filename: pointer to the file
 * @letters: numbers of letters it should read and print
 * Return: the actual number of letters it could read and print
 *			0 if filename is NULL
 *			0 if write fails or does not write the expected amount
 *			of byte
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *temp;

	if (filename == NULL)
		return (0);

	temp = malloc(sizeof(char) * letters + 1);
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}

	o = open(filename, O_RDONLY, 0600);
	if (o == -1)
	{
		free(temp);
		return (0);
	}

	r = read(o, temp, letters);
	if (r == -1)
	{
		free(temp);
		return (0);
	}

	w = write(STDOUT_FILENO, temp, letters);
	if (w == -1)
	{
		free(temp);
		return (0);
	}

	close(o);
	free(temp);
	return (w);
}
