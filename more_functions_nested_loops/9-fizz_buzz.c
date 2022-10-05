#include <stdio.h>
#include "main.h"
/**
 * print_fizz - entry point
 * Description: prints numbers from 1 to 100 and Fizz, Buzz, FizzBuzz
 * Return: numbers
 */
void print_fizz(int i)
{
	for (i = 1; i <= 100; i++)
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
