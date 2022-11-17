#include "main.h"
#include <stdio.h>

/**
 * clear_bit - entry point
 * Description: sets the value of a bit to 0 at a given index
 * @n: pointer to number converted in binary
 * @index: given index, starting from 0 of the bit wanted to set
 * Return: 1 if worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= 2000)
		return (-1);

	mask = ~(1 << index);

	*n &= mask;

	return (1);
}
