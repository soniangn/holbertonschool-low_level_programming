#include "main.h"
/**
 * more_numbers - entry point
 * Description: prints ten times the numbers, from 0 to 14
 * Return: the numbrs printed from 0 to 14
 */
void more_numbers(void)
{
	int i = '1';
	int j;

	while (i < '11')
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		i++;
	}
	_putchar('\n');
}
