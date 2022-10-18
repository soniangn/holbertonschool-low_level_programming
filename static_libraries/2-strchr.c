#include "main.h"
#include <stddef.h>
/**
 * *_strchr - entry point
 * @s: a string
 * @c: a character to find
 * Description: locates a character in a string
 * Return: pointer to the first occurence of
 *        the character c in the string, or NULL
 *        if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
