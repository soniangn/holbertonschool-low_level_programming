#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: array
 * Description: prints the sum of the two diagonals
 *				of a square matrix of integers
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, n;

	for (i = 0; i <= size; i++)
	{
			n += *(a + i);	
	}	
	printf("%d", n);
	printf("\n");
}
