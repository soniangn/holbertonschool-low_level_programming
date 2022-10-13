#include "main.h"
/**
 * *_strspn - entry point
 * @s: a string
 * @accept: a string
 * Description: gets the length of a prefix substring
 * Return: the number of bytes in the initial segment of
 *         s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int n = 0;

	while (*accept++)
	{
		for (i = 0; i != '\0'; i++)
		{
			if (*accept == s[i])
				n++;
			else
				return (n);
		}
	}
	return (n);
}
