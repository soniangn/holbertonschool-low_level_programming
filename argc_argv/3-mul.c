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
	int i, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		i = x * y;

		printf("%d\n", i);
		return (0);
	}
}
