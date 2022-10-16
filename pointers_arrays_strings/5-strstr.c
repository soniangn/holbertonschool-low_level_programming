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
	int i, j;

	for (j = 0; haystack[j]; j++)
	{
		while (needle[i] == haystack[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
			haystack++;
		}
		return (NULL);
	}
	return (NULL);
}
