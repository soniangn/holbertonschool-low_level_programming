#include "main.h"

/**
 * puts2 - entry point
 * @str: a string
 * Description: prints every other character of a string
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (*str = 0; *str != '\0'; str++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');

}
