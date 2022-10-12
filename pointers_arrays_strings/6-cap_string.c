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
	
	if (s[i] == 46)
	{
		for (; s[i + 2] != '\0'; i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
	}
	return (s);
}
