#include <stdio.h>
#include "main.h"
/**
 * print_prime_number - entry point
 * Description: prints the largest prime factor of 612852475143
 * Return: 0
 */
void print_prime_number(void)
{
	int i;
	long int n = 612852475143;

	for (i = 0; i <= n; i++)
	{
		while (i % 10 == i)
			printf("%d", 10 % i);
	}
}
