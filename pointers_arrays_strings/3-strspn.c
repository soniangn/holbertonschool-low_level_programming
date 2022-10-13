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
	int i = 0;
	int n = 0;
	
	while (i != '\0')
	{
		s[n] = accept[i];
		n++;
	}
	return (n + 1);
}
