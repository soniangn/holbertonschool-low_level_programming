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
	int i, j;
	int o = 0;
	int p = 0;
	int n = size * size;

	for (i = 0; i <= n; i += size + 1)
	{
		o += a[i];
	}

	for (j = size - 1; j < n - 1; j += size - 1)
	{
		p += a[j];
	}
	printf("%d, %d\n", o, p);
}
