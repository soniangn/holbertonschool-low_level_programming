#include "main.h"

/**
 * cap_string - entry point
 * @s: string to capitalized
 * Description: capitalized all words of a string
 * Return: capitalized string words
 */
char *cap_string(char *s)
{
	int i;
	int n = 0;
	int a[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == a[n])
		{
			if (s[i + 2] >= 'a' && s[i + 2] <= 'z')
				s[i + 2] -= 32;
		n++;
		}
	}
	return (s);
}
