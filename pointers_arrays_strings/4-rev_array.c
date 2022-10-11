#include "main.h"

/**
 * reverse_array - entry point
 * @a: pointer to an array of int
 * @n: number of elements of the array
 * Description: reverses the content of an array of int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n; i >= (n / 2); i--)
	{
		j =	a[i];
		a[i] = a[n - i];
		a[n - i] = j;
	}
}
