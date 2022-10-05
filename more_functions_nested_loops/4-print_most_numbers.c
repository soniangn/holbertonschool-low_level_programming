#include "main.h"
/**
 * print_most_numbers - entry point
 * Description: prints the numbers, from 0 to 9. Do not print 2 and 4
 * Return: the numbrs printed except 2 and 4
 */
void print_most_numbers(void)
{
	int i;
	
	while (i >= '0' && i <= '9')
	{
		while (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
