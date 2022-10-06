#include "main.h"
/**
 * times_table - entry point
 * Description: prints the 9 times table, starting with 0
 * Return: the 9 table
 */
void times_table(void)
{
	int i;
	int j;
	result = i * j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{	
		_putchar(result + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		_putchar('\n');
	}
}
