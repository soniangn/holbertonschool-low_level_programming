#include "main.h"
/**
 * print_natural - entry point
 * Description: prints the sum of multiples of 3 or 5 below 1024 (excluded)
 * Return: 0
 */
int print_natural(void)
{
	int i;
	int j = 0;

	while (i < 1024)
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j = j + i;
			i++;
		}
	return (j);
}
