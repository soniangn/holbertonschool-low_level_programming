#include "main.h"

/**
 * swap_int - entry point
 * @a: pointer to an int a
 * @b: pointer to an int b
 * Description: swaps the value of two integers
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
