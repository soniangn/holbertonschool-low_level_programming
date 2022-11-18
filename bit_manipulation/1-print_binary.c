#include "main.h"
#include <stdio.h>

/**
 * print_binary - entry point
 * Description: prints the binary representation of a number
 * @n: number to print in binary
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
