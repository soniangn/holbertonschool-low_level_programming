#include "main.h"

/**
 * _strcmp - entry point
 * @s1: string to be compared to
 * @s2: string compared
 * Description: compares two strings
 * Return: integers
 */
char _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *s1 != '\0' && *s2 != '\0'; i++)
	{
		if (*s1 < *s2 || *s1 > *s2)
			return (*s1 - *s2);
		else
			return ('0');
	}
	return (0);
}
