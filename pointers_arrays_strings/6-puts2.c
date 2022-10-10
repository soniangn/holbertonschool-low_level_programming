#include "main.h"

/**
 * puts2 - entry point
 * @str: a string
 * Description: prints every other character of a string
 * Return: 0
 */
void puts2(char *str)
{
	for (*str = 0; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');

}
