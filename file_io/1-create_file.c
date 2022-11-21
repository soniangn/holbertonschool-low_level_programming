#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
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
	char new_file, file_content;
	int *temp;
	int length = strlen(text_content);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		creat(filename, 0600);
		write(filename, text_content, length);

	new_file = creat(filename, 0600);

	file_content = write(new_file, text_content, strlen(text_content));
	if (file_content == -1)
		return (-1);

	close(new_file);
	return (1);
}
