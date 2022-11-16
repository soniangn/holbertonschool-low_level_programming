#include "main.h"
#include <stdio.h>

/**
 * get_bit - entry point
 * Description: returns the value of a bit at a given index
 * @n: number
 * @index: given index, starting from 0 of the bit wanted to get
 * Return: the value of the bit at index index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index) & 1;

	return (bit);
}
