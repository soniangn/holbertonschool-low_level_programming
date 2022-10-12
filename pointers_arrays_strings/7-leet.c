#include "main.h"

/**
 * *leet - entry point
 * @s: string to be encoded
 * Description: encoded a string into 1337
 * Return: string encoded
 */
char *leet(char *s)
{
	int i;
	int n;
	char a[5] = {'a', 'e', 'o', 't', 'l'}; 
	char b[5] = {'A', 'E', 'O', 'T', 'L'};
	char c[5] = {'4', '3', '0', '7', '1'};
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 5; n++)
		{
			if (s[i] == a[n] || s[i] == b[n])
				s[i] = c[n];
		}
	}
	return (s);
}
