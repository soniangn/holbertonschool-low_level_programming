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
	
	while (i != '\0')
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
