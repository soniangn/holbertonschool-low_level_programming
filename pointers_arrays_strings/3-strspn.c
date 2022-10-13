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
	unsigned int i, j;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				n++;
		}
	}
	return (n);
}
