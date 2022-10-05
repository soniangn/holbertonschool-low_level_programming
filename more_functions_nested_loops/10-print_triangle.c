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
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (; size >= 0; size--)
		{
			_putchar(' ');
			for (i = 0; i < size; i++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
}
