#include "main.h"

/**
 * _strcmp - entry point
 * @s1: string to be compared to
 * @s2: string compared
 * Description: compares two strings
 * Return: integers
 */
char _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		_putchar('0');	
	}
	else
	{
		_putchar(*s1 - *s2);
	}
	_putchar('\n');
}
