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
	int k;
	
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= (i / 2); j--)
	{
		k = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = k;
	}

	_putchar('\n');

}
