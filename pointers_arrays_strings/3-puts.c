#include "main.h"

/**
 * _puts - entry point
 * @str: a string
 * Description: prints a string to stdout
 * Return: string
 */
int _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');

}
