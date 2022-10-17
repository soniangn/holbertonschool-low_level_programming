#include "main.h"

/**
 * factorial - entry point
 * @n: given number
 * Description: returns the factorial of a given number
 * Return: returns the factorial of a given number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
