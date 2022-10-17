#include "main.h"

/**
 * square - entry point
 * @n: given number
 * @sq: square root
 * Description: returns the natural square root of a number.
 * Return: returns the natural square root of a number.
 */

int square(int n, float sq)
{
	if ((sq * sq) == n)
		return (sq);
	else
		return (square (n, sq + 1));	
}

/**
 * _sqrt_recursion - entry point
 * @n: given number
 * Description: returns the natural square root of a number.
 * Return: returns the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (square(n, 1));
	return (0);
}
