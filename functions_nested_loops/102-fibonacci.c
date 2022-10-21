#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int j = 2;
	int n; 

	while (n < 50)
	{
		i = (i - 1) + (j - 2);
		printf("%d, ", i);
		n++;
	}
	return (0);
}
