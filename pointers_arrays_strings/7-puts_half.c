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
	int i = 0;
	int j = 0;
	int n;

	while (str[i] != '\0')
	{
		j++;
	}
	
	if ((j % 2) == 0)
		n = j / 2;
	else
		n = ((j - 1) / 2);

	for (i = n; i < j; i++)
		_putchar(str[i]);

	_putchar('\n');
}
