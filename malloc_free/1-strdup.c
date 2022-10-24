#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - entry point
 * @str: string
 * Description: see below
 *	Return: a pointer to a newly allocated space in memory,
 *			which contains a copy of the string given
 *			as a parameter
 */

char *_strdup(char *str)
{
	char *copy;
	int i = 0;
	int length = 0;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		length++;
		str++;
	}

	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (; i < length; i++)
		copy[i] = str[i];

	copy[length] = '\0';
	return (copy);
	free(copy);
}
