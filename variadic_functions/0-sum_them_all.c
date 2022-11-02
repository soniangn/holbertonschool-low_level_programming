#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - entry point
 * Description: returns the sums of all its parameters
 * @n: integer
 * Return: sum of all the parameteres
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;

	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);
	return (sum);
}
