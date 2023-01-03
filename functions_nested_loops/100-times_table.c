#include "main.h"
#include <stdio.h>
/**
 * times_table - entry point
 * Description: prints the n times table, starting with 0
 * Return: the n table
 */
void print_times_table(int n)
{
	int i;
	int j;

	while (n < 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j > 0 && ((i * j) / 10) != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (j > 0)
			{
				_putchar(' ');
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
			if (j < n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
	}
}
