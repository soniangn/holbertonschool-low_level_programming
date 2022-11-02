#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - entry point
 * Description: prints numbers
 * @separator: separator to be used between numbers
 * @n: unsigned integer
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int nb;
	unsigned int i = 0;

	va_list numbers;

	va_start(numbers, n);

	for (; i < n; i++)
	{
		nb = va_arg(numbers, const unsigned int);
		printf("%d", nb);

		if (separator == NULL)
			continue;

		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");


	va_end(numbers);
	}
