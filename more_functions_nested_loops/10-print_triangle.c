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
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
}
