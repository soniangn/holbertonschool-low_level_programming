#include "main.h"
/**
 * more_numbers - entry point
 * Description: prints ten times the numbers, from 0 to 14
 * Return: the numbrs printed from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			else
				_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
