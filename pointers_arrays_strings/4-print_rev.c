#include "main.h"

/**
 * print_rev - entry point
 * @s: a string
 * Description: prints a string in reverse
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
		j++;
	}

	while (s[i] < s[j])
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');

}
