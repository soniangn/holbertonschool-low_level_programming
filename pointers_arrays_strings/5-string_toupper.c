#include "main.h"

/**
 * *string_toupper - entry point
 * @s: string to change to uppercase
 * Description: changes alle lowercase letters of a string
 *				to uppercase
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
