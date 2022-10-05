#include "main.h"
/**
 * print_square - entry point
 * Description: prints a square, followed by a new line
 * @size: size of the square
 * Return: a square
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar ('#');
			}
		_putchar('\n');
		}
	}
}
