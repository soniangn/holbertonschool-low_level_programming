#include "main.h"
#include <stdio.h>
/**
 * puts_half - entry point
 * @str: a string
 * Description: prints half of a string
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0, j, n;

	while (str[j] != '\0')
	{
		i++;
	}
	
	if ((i % 2) == 0)
		n = i / 2;
	else
		n = ((i - 1) / 2);

	for (j = n; j < i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
