#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 2)
	{
		number = atoi(argv[1]);
		if (number < 0)
			printf("0\n");
		if (number >= 100)
		{
			count += number / 25;
			number = number % 25;
		}
		if (number >= 10)
		{
			count += number / 10;
			number = number % 10;
		}
		if (number >= 5)
		{
			count += number / 5;
			number = number % 5;
		}
		if (number >= 2)
		{
			count += number / 2;
			number = number % 2;
		}
		if (number >= 1)
			count += number;
	}
	printf("%d\n", count);
	return (0);
}
