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
 * append_text_to_file - entry point
 * Description: appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the NULL-terminated string to add at the end
 *					of the file
 * Return: 1 on success, -1 on failure (filename NULL)
 *		   if text_content NULL, return 1 if file exist or -1 if not or if
 *		you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int length = _strlen(text_content);
	int open_file, write_file;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_RDWR | O_APPEND, 0600);
		if (open_file == -1)
			return (-1);

	/* appends text content */
	if (text_content == NULL)
	{
		if (filename)
			return (1);
		else if (!filename)
			return (-1);
	}
	else
	{
		write_file = write(open_file, text_content, length);
		if (write_file == -1)
			return (-1);
	}

	close(open_file);
	return (1);
}
