#include "main.h"
#include <stdio.h>

/**
 * cap_string - entry point
 * @s: string to capitalized
 * Description: capitalized all words of a string
 * Return: capitalized string words
 */
char *cap_string(char *s)
{
	int i;
	int n;
char a[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
	'{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((i == 0) && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}

		for (n = 0; n < 13; n++)
		{
			if (s[i] == a[n])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
