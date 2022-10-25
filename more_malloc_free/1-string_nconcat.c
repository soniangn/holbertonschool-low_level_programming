#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *string_nconcat - entry point
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: first n bytes of s2
 * Description: concatenates two strings
 *	Return: a pointer to a newly allocated space in memory
 *			which contains in memory the contents of s1,
 *			followed by the first n bytes of s2, and null terminated.
 *			Return NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = 0, j;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		length_s1++;

	for (i = 0; s2[i] != '\0'; i++)
		length_s2++;

	if (n >= length_s2)
		n = length_s2;

	concat = malloc((length_s1 + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	i = 0;

	for (j = 0; j < length_s1; j++)
	{
		concat[i] = s1[j];
		i++;
	}

	for (j = 0; j < n; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[length_s1 + n] = '\0';
	return (concat);
}
