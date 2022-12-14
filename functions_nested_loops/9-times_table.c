#include "main.h"
#include <stdio.h>
/**
 * times_table - entry point
 * Description: prints the 9 times table, starting with 0
 * Return: the 9 table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > 0 && ((i * j) / 10) != 0)
			{
				_putchar(' ');
			}
			else if (j > 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			if ((i * j) < 10)
			{
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
