#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - entry point
 * Description: prints a name
 * @name: name to print
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
