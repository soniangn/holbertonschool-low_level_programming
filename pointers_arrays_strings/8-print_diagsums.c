#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: array
 * @size: size of the square matrix
 * Description: prints the sum of the two diagonals
 *				of a square matrix of integers
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, n, o, result;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			if (i == j)
				n += *(a + i + j);
			else if ((i + j) == (size - 1))
				o += *(a + i + j);
		}
	}
	result = n + o;
	printf("%d", result);
	printf("\n");
}
