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
	*dest = *src;
	return (*dest);
}
