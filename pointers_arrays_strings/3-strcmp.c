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

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
