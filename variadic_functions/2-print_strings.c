#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - entry point
 * Description: prints strings
 * @separator: separator to be used between strings
 * @n: strings to be printed
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;

	va_list list_string;

	va_start(list_string, n);

	for (; i < n; i++)
	{
		string = va_arg(list_string, char*);
	
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator == NULL)
			continue;

		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list_string);
	}
