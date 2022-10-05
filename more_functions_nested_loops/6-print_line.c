#include "main.h"
/**
 * print_line - entry point
 * Description: draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
