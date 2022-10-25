#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *str_concat - entry point
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Description: concatenates two strings
 *	Return: a pointer to a newly allocated space in memory
 *			which contains in memory the contents of s1,
 *			followed by the contents of s2, and null terminated.
 *			Return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0;
	int length_s1 = 0;
	int length_s2 = 0;

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	concat = malloc((length_s1 + length_s2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";

	while (*s1 != '\0')
	{
		concat[i] = *s1;
		i++;
		s1++;
	}

	while (*s2 != '\0')
	{
		concat[i] = *s2;
		i++;
		s2++;
	}

	concat[length_s1 + length_s2] = '\0';
	return (concat);
	free(concat);
}
