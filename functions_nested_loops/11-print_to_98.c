#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * @n: natural number
 * Description: prints all natural numbers from n to 98
 * Return: natural numbers from n to 98
 */
void print_to_98(int n)
{ 
		for (; n <= 98; n++)
		{	
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d", n);
				printf(",");
				printf(" ");
			}
		}
}
