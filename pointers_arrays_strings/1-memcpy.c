#include "main.h"

/**
 * *_memcpy - entry point
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: first n bytes of the memory area
 * Description: copies memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*dest[i] = src[n];
	return (dest);
}
