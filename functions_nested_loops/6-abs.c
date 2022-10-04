#include "main.h"
/**
 * _abs - entry point
 * Description: computes the absolute of an integer
 * Return: 0
 */
int _abs(int i)
{
	if (i > 0)
		_putchar(i);
	if (i < 0)
		_putchar(i * -1);
	return (0);
}
