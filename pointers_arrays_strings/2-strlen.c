#include "main.h"

/**
 * _strlen - entry point
 * @s: a string
 * Description: returns the length of a string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);

}
