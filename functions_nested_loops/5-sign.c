#include "main.h"
/**
 * print_sign - entry point
 * Description: prints the sign of a number
 * int n: number to check
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar (0);
	}
	else
	{
		return ('-1');
		_putchar ('-');
	}
}
