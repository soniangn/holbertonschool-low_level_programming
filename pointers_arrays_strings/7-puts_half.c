#include "main.h"

/**
 * puts_half - entry point
 * @str: a string
 * Description: prints half of a string
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int n = ((i - 1) / 2);

	while (*str != '\0')
	{
		i++;
		str++;
	}
		return (i);

	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');

}
