#include "main.h"

/**
 * *_strncpy - entry point
 * @dest: string to append
 * @src: string that will be appended
 * @n: n bytes from src
 * Description: appends the src string to the dest string
 * Return: pointer to the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	 dest[i] = '\0';

	return (dest);
	_putchar('\n');
}
