#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int n;

	while (n < 50)
	{
		while (i < 0)
			_putchar((i - 1) + (i - 2));
		n++;
	}
	return (0);
}
