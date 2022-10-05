#include "main.h"
/**
 * print_diagonal - entry point
 * Description: draws a diagonal line in the terminal
 * @n: number of times the character \ should be printed
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar (' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
