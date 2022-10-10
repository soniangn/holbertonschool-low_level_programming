#include "main.h"

/**
 * puts_half - entry point
 * @str: a string
 * Description: prints half of a string
 * Return: 0
 */
void puts_half(char *str)
{
	int length_of_the_string = '\0' - str[0];
	n = (length_of_the_string - 1) / 2;

	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');

}
