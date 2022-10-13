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
	int i;
	int n = 0;
	
	for (i = 0; accept[i] >= 0; i++)
	{
		s[n] = accept[i];
		n++;
	}
	return (n + 1);
}
