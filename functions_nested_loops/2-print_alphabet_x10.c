#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: prints the alphabet in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
	}
		i++;
	_putchar('\n');
}
