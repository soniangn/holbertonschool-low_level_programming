#include <stdio.h>
#include "main.h"
/**
 * print_triangle - entry point
 * @size: size of the triangle
 * Description: prints a triangle, followed by a new line
 * Return: triangle
 */
void print_triangle(int size)
{
	int i, j;
	int k = size - 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < k)
					_putchar(' ');
				else
					_putchar('#');
			}
			k--;
			_putchar('\n');
		}
	}
}
