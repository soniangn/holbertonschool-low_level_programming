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

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			while (needle[i] == *haystack)
			{
				if (needle[i + 1] == '\0')
					return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
