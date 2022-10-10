#include "main.h"

/**
 * print_rev - entry point
 * @s: a string
 * Description: prints a string in reverse
 * Return: string in reverse
 */
void print_rev(char *s)
{
	for (*s = '\0'; *s > *s[0]; s--)
	{
		_putchar(*s);
	}

	_putchar('\n');

}
