#include "main.h"
/**
 * print_last_digit - entry point
 * Description: prints the last digit of a number
 * @i: number
 * Return: the last digit of the number i
 */
int print_last_digit(int i)
{
	if (i >= 0)
		printf("%d", 10%i);
	else
		printf("d", 10%i);
	_putchar ('\n');
	return (0);
}
