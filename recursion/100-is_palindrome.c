#include "main.h"
#include <string.h>

/**
 * check_palindrome - entry point
 * @s: given string to check
 * Description: checks if the string a palindrome
 * Return: 1 if the string is a palindrome,
 *          otherwise return 0
 */

int check_pal(char *s, int l)
{
	int i = 0;

	for (i; i < l / 2; i++)
	{	
		if (s[i] == s[l - i - 1])
			return (check_pal(s + 1, l - 1));
		else
			return (0);
	}

	if (l <= 1)
		return (1);
	else
		return (0);
}

/**
 * is_palindrome - entry point
 * @s: given string to check
 * Description: indicates if the string is a palindrome
 * Return: 1 if the string is a palindrome,
 *          otherwise return 0
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (*s != '\0')
		return (check_pal(s, length));
	else 
		return (0);
	return (0);
}

