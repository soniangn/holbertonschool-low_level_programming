#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * @a: an array
 * @n: number of elements of the array to be printed
 * Description: prints n elements of an array of integers
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i < n)
			printf("%d", *(a + i));
		printf(",");
		printf(" ");
	}
}
