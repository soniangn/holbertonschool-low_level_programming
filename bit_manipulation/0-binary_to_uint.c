#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - entry point
 * Description: converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 *			there is one or more chars in the string that is not 0 or 1
 *			b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	unsigned int base = 1;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;

	i -= 1;

	while (i)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		if (b[i] == '1')
			uint += base;
		
		base *= 2;
		i--;
	}

	return (uint);
}
