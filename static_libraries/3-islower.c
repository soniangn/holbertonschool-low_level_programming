#include "main.h"
/**
 * _islower - entry point
 * Description: checks for character c in lowercase
 * @c: character to check
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
