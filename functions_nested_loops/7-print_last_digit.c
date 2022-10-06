#include "main.h"
/**
 * print_last_digit - entry point
 * Description: prints the last digit of a number
 * @i: number
 * Return: the last digit of the number i
 */
int print_last_digit(int i)
{
	int m = (i % 10);

	if (i >= 0)
	{
		_putchar(m + '0');
		return (m);
	}
	else
	{
		_putchar(-m + '0');
		return (-m);
	}
}
