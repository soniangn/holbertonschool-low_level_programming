#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - entry point
 * Description: return the length of the string
 * @s: pointer to a string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	return (count);
}

/**
 * create_file - entry point
 * Description: creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to the NULL-terminated string to write
 *					to the file
 * Return: 1 on success, -1 on failure (filename NULL, text_content NULL,
 *		   file can not be created, can not be written, write fails, etc.)
 */
int create_file(const char *filename, char *text_content)
{
	int length = _strlen(text_content) + 1;
	int new_file, write_file;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (new_file == -1)
		return (-1);

	if (text_content)
	{
		write_file = write(new_file, text_content, length);
		if (write_file == -1)
			return (-1);
	}

	close(new_file);
	return (1);
}
