#include "main.h"
/**
 * _isupper - entry point
 * Description: checks for uppercase character
 * @c: character
 * Return: 0 or 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'Z' || c <= 'A')
		return (1);
	else
		return (0);
}
