#include "main.h"
/**
 * _isupper - entry point
 * Description: checks for uppercase character
 * @c: character
 * Return: 0 or 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
