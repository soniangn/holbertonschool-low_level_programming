#include "main.h"
#include <stddef.h>
/**
 * *_strstr - entry point
 * @haystack: string
 * @needle: a substring
 * Description: locates a substring
 * Return: a pointer to the beginning of the located
 *         substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int n = 0;

	while (*haystack++)
	{
		for (i = 0; needle[i]; i++)
		{
			while (needle[i] == *haystack)
				n++;
			if (needle[i] == '\0')
				return (haystack);
		}
	}
	return (NULL);
}
