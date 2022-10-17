#include "main.h"

/**
 * _pow_recursion - entry point
 * @x: given number
 * @y: given second number
 * Description: returns the value of x raised to the power of y
 * Return: returns the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
