#include "main.h"
/**
 * times_table - entry point
 * Description: prints the 9 times table, starting with 0
 * Return: the 9 table
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{	_putchar (i * 9);
		_putchar('\n');
	}
}
