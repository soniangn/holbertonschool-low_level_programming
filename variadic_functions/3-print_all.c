#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character
 * Description: prints a character
 * @arg: a list of arguments to be printed
 * Return: 0
 */

void print_char(va_list arg)
{
	char cht;
	cht = va_arg(arg, int);
	printf("%c", cht);
}

 /**
  * print_integer - prints an integer
  * Description: prints an integer
  * @arg: a list of arguments to be printed
  * Return: 0
  */

void print_integer(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

 /**
  * print_float - prints a float
  * Description: prints a float
  * @arg: a list of arguments to be printed
  * Return: 0
  */

void print_float(va_list arg)
{
	float decimal;

	decimal = va_arg(arg, double);
	printf("%f", decimal);
}

 /**
  * print_string - prints a string
  * Description: prints a string
  * @arg: a list of arguments to be printed
  * Return: 0
  */

void print_string(va_list arg)
{
	char *word;

	word = va_arg(arg, char *);

	word == NULL ? printf("%p\n", word) : printf("%s", word);
}

 /**
  * print_all - entry point
  * Description: prints anything
  * @format: list of types of arguments
  * Return: 0
  */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int n = 0;
	char *separator = ", ";

	print_f func[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(args, format);

	while (format[i])
	{
		while (n < 4 && (format[i] != *(func[n].character)))
		{
			n++;
		}

		if (n < 4 && (format[i] == *(func[n].character)))
		{
			func[n].print_type(args);

			if (format[i + 1] != '\0')
				printf("%s", separator);
		}	
		i++;
		n = 0;
	}
	printf("\n");
	va_end(args);
}
