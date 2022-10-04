#include "main.h"
/**
 * @abs - entry point
 * Description: computes the absolute of an integer
 * Return: 0
 */
int _abs(int i)
{
	if (i > 0)
		_putchar(i);
	else
		_putchar(-1 * i);
	return (0);
}
