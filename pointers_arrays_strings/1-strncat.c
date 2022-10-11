#include "main.h"

/**
 * *_strncat - entry point
 * @dest: string to append
 * @src: string that will be appended
 * @n: n bytes from src
 * Description: appends the src string to the dest string
 * Return: pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	 dest[i + j] = '\0';

	return (dest);
	_putchar('\n');
}
