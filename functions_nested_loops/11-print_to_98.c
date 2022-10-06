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
		if (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				n++;
			}
			else
			{
				for (; n <= 98; n++)
				{
					if (n < 98)
					{
						printf("%d", n);
						printf(",");
						printf(" ");
					}
					else
					{
						printf("%d", n);
					}
				}
			}
		}
		else 
		{
			for(; n >= 98; n--)
			{
				printf("%d", n);
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
}
