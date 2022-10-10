#include "main.h"

/**
 * puts2 - entry point
 * @str: a string
 * Description: prints every other character of a string
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}

	_putchar('\n');

}
