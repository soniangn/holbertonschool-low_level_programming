#include "main.h"
/**
 * *_strpbrk - entry point
 * @s: a string
 * @accept: a string
 * Description: searches a string for any of a set of bytes
 * Return: a pointer to the byte in s that matches one of the bytes
 *         in accept, of NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int n = 0;

	while (*s++)
	{
		for (i = 0; i != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
			else
				return (NULL);
		}
	}
}
