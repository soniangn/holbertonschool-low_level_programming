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
	int a[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	
	while (s[i] == a[n])
	{
		for (; s[i + 2] != '\0'; i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		n++;
	}
	return (s);
}
