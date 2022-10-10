#include "main.h"

/**
 * puts_half - entry point
 * @str: a string
 * Description: prints half of a string
 * Return: 0
 */
void puts_half(char *str)
{
	int n = ((str - 1) / 2);

	while (str[n] != '\0')
	{
		_putchar(str[n]);
	}

	_putchar('\n');

}
