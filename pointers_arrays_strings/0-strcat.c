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
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	 dest[i] = '\0';
	
	
	return (dest);
	_putchar('\n');
}
