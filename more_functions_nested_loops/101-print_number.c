#include <stdio.h>
#include "main.h"
/**
 * print_number - entry point
 * Description: prints an integer
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{
	if (n == 0)
		_putchar ('0');
	else
		_putchar(n + '0');
}
