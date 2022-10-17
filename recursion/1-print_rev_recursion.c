#include "main.h"

/**
 * _puts_rev_recursion - entry point
 * @s: string to print in reverse
 * Description: prints a string in reverse
 */

void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_print_rev_recursion(s - 1);
		_putchar(*s);
	}
}
