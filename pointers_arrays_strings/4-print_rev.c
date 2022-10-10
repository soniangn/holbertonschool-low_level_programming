#include "main.h"

/**
 * print_rev - entry point
 * @s: a string
 * Description: prints a string in reverse
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i;

	for (i = '\0'; i > *s; i--)
	{
		_putchar(*s);
	}

	_putchar('\n');

}
