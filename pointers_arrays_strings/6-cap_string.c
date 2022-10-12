#include "main.h"

/**
 * cap_string - entry point
 * @s: string to capitalized
 * Description: capitalized all words of a string
 * Return: capitalized string words
 */
char *cap_string(char *s)
{
	int i = 0;
	int n = 0;
	int a[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	
	while (s[i] == a[n])
	{
		for (; s[i + 2] != '\0'; i++)
		{
			if (s[i + 2] >= 'a' && s[i + 2] <= 'z')
				s[i + 2] -= 32;
		}
		n++;
		i++;
	}
	return (s);
}
