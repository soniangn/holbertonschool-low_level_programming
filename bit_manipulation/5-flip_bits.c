#include "main.h"
#include <stdio.h>

/**
 * flip_bits - entry point
 * Description: returns the number of bits needed to flip to get
 *				from one number to another
 * @n: number 1
 * @m: number 2
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	while (n != 0 && m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			bits++;
		}
		n = n >> 1;
		m = m >> 1;
	}

	return (bits);
}
