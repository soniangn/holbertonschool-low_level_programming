#include "main.h"

/**
 * rev_string - entry point
 * @s: a string
 * Description: reverses a string
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
		j++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
