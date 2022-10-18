#include "main.h"

/**
 * *_strcat - entry point
 * @dest: a string
 * @src: a string
 * Description: appends the src string to the dest string
 * Return: pointer to the string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	 dest[i + j] = '\0';

	return (dest);
	_putchar('\n');
}
