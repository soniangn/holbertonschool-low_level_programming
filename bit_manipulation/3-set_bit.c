#include "main.h"
#include <stdio.h>

/**
 * set_bit - entry point
 * Description: sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: given index, starting from 0 of the bit wanted to set
 * Return: 1 if worked or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (index > *n)
		return (-1);

	*n |= mask;

	return (1);
}
