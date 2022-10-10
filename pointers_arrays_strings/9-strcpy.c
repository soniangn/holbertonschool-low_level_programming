#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - entry point
 * @dest: pointer of a buffer
 * @src: pointer to a string
 * Description: copies the string pointed to by src to the pointer dest
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}
